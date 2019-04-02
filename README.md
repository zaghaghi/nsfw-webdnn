This repository shows how to use [Yahoo OpenNSFW](https://github.com/yahoo/open_nsfw) pretrained model inside a browser to check user uploaded media.
# TL;DR
To run the model inside a brower do as follows
```bash
git clone https://github.com/zaghaghi/nsfw-webdnn
cd nsfw-webdnn
emrun --no_browser --port 8081 .
```

# Requirements
## Emscripten
If you don't have emscripten install it as follows. You can read more about it [here](https://webassembly.org/getting-started/developers-guide/).
```bash
git clone https://github.com/juj/emsdk.git
cd emsdk
export EMSDKPATH=$(pwd)
./emsdk install latest
./emsdk activate latest
```
## Webdnn
WebDNN is required if you need to use you own model instead of OpenNSFW.
```bash
conda create -p env python=3.6
source activate env/
pip install numpy setuptools chainer
git clone https://github.com/mil-tokyo/webdnn
cd webdnn
export WEBDNN=$(pwd)
python3 setup.py install
wget http://bitbucket.org/eigen/eigen/get/3.3.3.tar.bz2
tar jxf 3.3.3.tar.bz2
ln -s $(pwd)/eigen-eigen-67e894c6cd8f/Eigen $EMSDKPATH/emscripten/*/system/local/include
```
## Convert OpenNSFW model
I used these commands to convert OpenNSFW pretrained model to WebDNN equivalent. You can read more about WebDNN supported models in their [documentations](https://mil-tokyo.github.io/webdnn/docs/)
```bash
git clone https://github.com/yahoo/open_nsfw
cd open_nsfw/nsfw_model
python $WEBDNN/bin/convert_caffe.py  --input_name data --input_shape '(1,3,224,224)' --output_names fc_nsfw --out output resnet_50_1by2_nsfw.caffemodel
```

## OpenNSFW Image Transformer
We should preprocess every image before feeding it into network. These [lines](https://github.com/yahoo/open_nsfw/blob/a4e13931465f4380742545932657eeea0a10aa48/classify_nsfw.py#L111) are the preprocess section in OpenNSFW using caffe.
```python
caffe_transformer = caffe.io.Transformer({'data': nsfw_net.blobs['data'].data.shape})
caffe_transformer.set_transpose('data', (2, 0, 1))  # move image channels to outermost
caffe_transformer.set_mean('data', np.array([104, 117, 123]))  # subtract the dataset-mean value in each channel
caffe_transformer.set_raw_scale('data', 255)  # rescale from [0, 1] to [0, 255]
caffe_transformer.set_channel_swap('data', (2, 1, 0))  # swap channels from RGB to BGR
```
And these lines are WebDNN equivalent which you can find in `script.js`
```javascript
let image_array = await WebDNN.Image.getImageArray(img_src, {
    dstW: 224, dstH: 224,
    bias: [104, 117, 123],
    color: WebDNN.Image.Color.BGR,
    order: WebDNN.Image.Order.CHW,
});
```

# How to server
You can serve this example using this command
```bash
emrun --no_browser --port 8081 .
```
or any other web server that set correct mimetype for webassembly files (`.wasm`). Note that python `SimpleHTTPServer` can't be used here because it returns incorrect mimetype for `.wasm` files, read [here](https://curiousprog.com/2018/10/08/serving-webassembly-files-with-a-development-web-server/) if you insist using python `SimpleHTTPServer`.
