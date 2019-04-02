'use strict';

let runner;
let x, y, nsfw_prob;
let image;

function append(img) {
    img.width = 224 * 2;
    img.height = 'auto';
    img.style['display'] = 'block';
    img.setAttribute('class', 'section, media')
    
    let card = document.createElement('div');
    if (nsfw_prob > 0.5) {
        card.setAttribute('class', 'card error');
    }
    else {
        card.setAttribute('class', 'card ok');
    }

    let header = document.createElement('div');
    header.textContent = (100 * nsfw_prob).toFixed(2) + ' %';
    header.setAttribute('class', 'section');
    
    card.append(header);
    card.append(img);
    document.querySelector('#image-placeholder').append(card);
}

async function init() {
    runner = await WebDNN.load('./output', {
        cacheStrategy: 'networkOnly',
        saveCache: false,
    });

    x = runner.inputs[0];
    y = runner.outputs[0];

    document.querySelectorAll('button').forEach((b) => b.disabled = false)
}

async function run(img_src) {
    console.log(img_src);
    let image_array = await WebDNN.Image.getImageArray(img_src, {
        dstW: 224, dstH: 224,
        bias: [104, 117, 123],
        color: WebDNN.Image.Color.BGR,
        order: WebDNN.Image.Order.CHW,
    });
    x.set(image_array);

    await runner.run();
    let y_vec = y.toActual();
    nsfw_prob = Math.exp(y_vec[1]) / (Math.exp(y_vec[0]) + Math.exp(y_vec[1]));
    console.log('NSFW prob', nsfw_prob);
    console.log('Computed vector', y_vec);
    append(img_src);
}

function image_received() {
    run(image);
}

function download(url) {
    image = new Image;
    image.crossOrigin = "anonymous";
    image.addEventListener("load", image_received, false);
    image.src = url;
}

async function run_url() {
    if (!runner) await init();

    let img_url = document.querySelector('#imageurl').value;
    download(img_url);
}

async function run_file() {
    if (!runner) await init();
    
    let img_src = await WebDNN.Image.loadImageByDialog();
    console.log(img_src);
    await run(img_src);
}

window.onload = () => init();
