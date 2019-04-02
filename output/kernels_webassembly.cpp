
#include <stdlib.h>
#include <math.h>

float static_buffer[28885316];
float* dynamic_buffer = nullptr;

int meta_buf_0[] = {23251010,23401538,50176,3,3,50176};
int meta_buf_1[] = {23401538,5902658,1,3,224,224,112,112,7,7,1,1,2,2,3,3};
int meta_buf_2[] = {5902658,0,10456130,12544,64,147};
int meta_buf_3[] = {9408,9472,10456130,11258946,64,64,64,12544};
int meta_buf_4[] = {11258946,20441154,1,112,112,64,56,56,3,3,2,2,0,0};
int meta_buf_5[] = {20441154,21846082,64,3136,3136,64};
int meta_buf_6[] = {21846082,21243970,3136,64,64,3136};
int meta_buf_7[] = {21243970,9536,25094978,3136,32,64};
int meta_buf_8[] = {11584,11616,25094978,24994626,32,32,32,3136};
int meta_buf_9[] = {24994626,9552962,1,32,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_10[] = {9552962,11648,25797442,3136,32,288};
int meta_buf_11[] = {20896,20864,25797442,25596738,32,32,32,3136};
int meta_buf_12[] = {25596738,20928,16677954,3136,128,32};
int meta_buf_13[] = {21846082,22849602,3136,64,64,3136};
int meta_buf_14[] = {22849602,25024,17079362,3136,128,64};
int meta_buf_15[] = {33472,33344,33216,17079362,16677954,16276546,128,128,3136,128,3136};
int meta_buf_16[] = {16276546,15875138,3136,128,128,3136};
int meta_buf_17[] = {15875138,33600,25396034,3136,32,128};
int meta_buf_18[] = {37728,37696,25396034,25396034,32,32,32,3136};
int meta_buf_19[] = {25396034,7746626,1,32,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_20[] = {7746626,37760,24894274,3136,32,288};
int meta_buf_21[] = {47008,46976,24894274,24894274,32,32,32,3136};
int meta_buf_22[] = {24894274,47040,14269506,3136,128,32};
int meta_buf_23[] = {51136,51264,16276546,14269506,13868098,3136,128,3136,128,3136};
int meta_buf_24[] = {13868098,15072322,3136,128,128,3136};
int meta_buf_25[] = {15072322,51392,23890754,3136,32,128};
int meta_buf_26[] = {55488,55520,23890754,23890754,32,32,32,3136};
int meta_buf_27[] = {23890754,8649794,1,32,56,56,56,56,3,3,1,1,1,1,1,1};
int meta_buf_28[] = {8649794,55552,24693570,3136,32,288};
int meta_buf_29[] = {64768,64800,24693570,24392514,32,32,32,3136};
int meta_buf_30[] = {24392514,64832,15473730,3136,128,32};
int meta_buf_31[] = {69056,68928,13868098,15473730,14670914,3136,128,3136,128,3136};
int meta_buf_32[] = {14670914,17882178,3136,128,128,3136};
int meta_buf_33[] = {17882178,25295682,1,128,56,56,28,28,1,1,1,1,2,2,0,0};
int meta_buf_34[] = {25295682,69184,27352898,784,64,128};
int meta_buf_35[] = {77440,77376,27352898,27453250,64,64,64,784};
int meta_buf_36[] = {27453250,12513346,1,64,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_37[] = {12513346,77504,27403074,784,64,576};
int meta_buf_38[] = {114432,114368,27403074,27503426,64,64,64,784};
int meta_buf_39[] = {27503426,114496,22247490,784,256,64};
int meta_buf_40[] = {14670914,17480770,3136,128,128,3136};
int meta_buf_41[] = {17480770,26198850,1,128,56,56,28,28,1,1,1,1,2,2,0,0};
int meta_buf_42[] = {26198850,130880,23050306,784,256,128};
int meta_buf_43[] = {163904,164160,163648,23050306,22247490,21444674,256,256,784,256,784};
int meta_buf_44[] = {21444674,22648898,784,256,256,784};
int meta_buf_45[] = {22648898,164416,27854658,784,64,256};
int meta_buf_46[] = {180800,180864,27854658,27553602,64,64,64,784};
int meta_buf_47[] = {27553602,12964930,1,64,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_48[] = {12964930,180928,26951490,784,64,576};
int meta_buf_49[] = {217792,217856,26951490,26951490,64,64,64,784};
int meta_buf_50[] = {26951490,217920,21043266,784,256,64};
int meta_buf_51[] = {234560,234304,21444674,21043266,20039746,784,256,784,256,784};
int meta_buf_52[] = {20039746,20842562,784,256,256,784};
int meta_buf_53[] = {20842562,234816,27001666,784,64,256};
int meta_buf_54[] = {251200,251264,27001666,27252546,64,64,64,784};
int meta_buf_55[] = {27252546,12061762,1,64,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_56[] = {12061762,251328,27202370,784,64,576};
int meta_buf_57[] = {288256,288192,27202370,27302722,64,64,64,784};
int meta_buf_58[] = {27302722,288320,20641858,784,256,64};
int meta_buf_59[] = {304704,304960,20641858,20039746,19638338,256,784,784,256,784};
int meta_buf_60[] = {19638338,20240450,784,256,256,784};
int meta_buf_61[] = {20240450,305216,27653954,784,64,256};
int meta_buf_62[] = {321600,321664,27653954,28055362,64,64,64,784};
int meta_buf_63[] = {28055362,13416514,1,64,28,28,28,28,3,3,1,1,1,1,1,1};
int meta_buf_64[] = {13416514,321728,27904834,784,64,576};
int meta_buf_65[] = {358656,358592,27904834,27804482,64,64,64,784};
int meta_buf_66[] = {27804482,358720,22046786,784,256,64};
int meta_buf_67[] = {375104,375360,22046786,19638338,22448194,256,784,784,256,784};
int meta_buf_68[] = {22448194,21645378,784,256,256,784};
int meta_buf_69[] = {21645378,28155714,1,256,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_70[] = {28155714,375616,28481858,196,128,256};
int meta_buf_71[] = {408512,408384,28481858,28532034,128,128,128,196};
int meta_buf_72[] = {28532034,19186754,1,128,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_73[] = {19186754,408640,28281154,196,128,1152};
int meta_buf_74[] = {556224,556096,28281154,28281154,128,128,128,196};
int meta_buf_75[] = {28281154,556352,24191810,196,512,128};
int meta_buf_76[] = {22448194,19839042,784,256,256,784};
int meta_buf_77[] = {19839042,26901314,1,256,28,28,14,14,1,1,1,1,2,2,0,0};
int meta_buf_78[] = {26901314,621888,24091458,196,512,256};
int meta_buf_79[] = {753984,753472,752960,24091458,24191810,24793922,512,512,196,512,196};
int meta_buf_80[] = {24793922,24593218,196,512,512,196};
int meta_buf_81[] = {24593218,754496,28557122,196,128,512};
int meta_buf_82[] = {820032,820160,28557122,28557122,128,128,128,196};
int meta_buf_83[] = {28557122,18283586,1,128,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_84[] = {18283586,820288,28256066,196,128,1152};
int meta_buf_85[] = {967872,967744,28256066,28306242,128,128,128,196};
int meta_buf_86[] = {28306242,968000,24492866,196,512,128};
int meta_buf_87[] = {1033536,1034048,24793922,24492866,24793922,196,512,196,512,196};
int meta_buf_88[] = {24793922,26499906,196,512,512,196};
int meta_buf_89[] = {26499906,1034560,28682562,196,128,512};
int meta_buf_90[] = {1100096,1100224,28682562,28506946,128,128,128,196};
int meta_buf_91[] = {28506946,18509378,1,128,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_92[] = {18509378,1100352,28707650,196,128,1152};
int meta_buf_93[] = {1247808,1247936,28707650,28356418,128,128,128,196};
int meta_buf_94[] = {28356418,1248064,26299202,196,512,128};
int meta_buf_95[] = {1313600,1314112,26299202,24793922,25897794,512,196,196,512,196};
int meta_buf_96[] = {25897794,25697090,196,512,512,196};
int meta_buf_97[] = {25697090,1314624,28732738,196,128,512};
int meta_buf_98[] = {1380160,1380288,28732738,28657474,128,128,128,196};
int meta_buf_99[] = {28657474,18735170,1,128,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_100[] = {18735170,1380416,28205890,196,128,1152};
int meta_buf_101[] = {1527872,1528000,28205890,28230978,128,128,128,196};
int meta_buf_102[] = {28230978,1528128,24292162,196,512,128};
int meta_buf_103[] = {1594176,1593664,24292162,25897794,23991106,512,196,196,512,196};
int meta_buf_104[] = {23991106,25998146,196,512,512,196};
int meta_buf_105[] = {25998146,1594688,28331330,196,128,512};
int meta_buf_106[] = {1660352,1660224,28331330,28331330,128,128,128,196};
int meta_buf_107[] = {28331330,18960962,1,128,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_108[] = {18960962,1660480,28381506,196,128,1152};
int meta_buf_109[] = {1808064,1807936,28381506,28381506,128,128,128,196};
int meta_buf_110[] = {28381506,1808192,26800962,196,512,128};
int meta_buf_111[] = {1873728,1874240,26800962,23991106,26700610,512,196,196,512,196};
int meta_buf_112[] = {26700610,26399554,196,512,512,196};
int meta_buf_113[] = {26399554,1874752,28406594,196,128,512};
int meta_buf_114[] = {1940288,1940416,28406594,28607298,128,128,128,196};
int meta_buf_115[] = {28607298,19412546,1,128,14,14,14,14,3,3,1,1,1,1,1,1};
int meta_buf_116[] = {19412546,1940544,28632386,196,128,1152};
int meta_buf_117[] = {2088000,2088128,28632386,28582210,128,128,128,196};
int meta_buf_118[] = {28582210,2088256,26098498,196,512,128};
int meta_buf_119[] = {2154304,2153792,26700610,26098498,26600258,196,512,196,512,196};
int meta_buf_120[] = {26600258,25496386,196,512,512,196};
int meta_buf_121[] = {25496386,28456770,1,512,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_122[] = {28456770,2154816,28845634,49,256,512};
int meta_buf_123[] = {2286144,2285888,28845634,28782914,256,256,256,49};
int meta_buf_124[] = {28782914,23664962,1,256,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_125[] = {23664962,2286400,28870722,49,256,2304};
int meta_buf_126[] = {2876224,2876480,28870722,28870722,256,256,256,49};
int meta_buf_127[] = {28870722,2876736,28105538,49,1024,256};
int meta_buf_128[] = {26600258,25195330,196,512,512,196};
int meta_buf_129[] = {25195330,28431682,1,512,14,14,7,7,1,1,1,1,2,2,0,0};
int meta_buf_130[] = {28431682,3138880,28005186,49,1024,512};
int meta_buf_131[] = {3665216,3663168,3664192,28005186,28105538,27754306,1024,1024,49,1024,49};
int meta_buf_132[] = {27754306,27603778,49,1024,1024,49};
int meta_buf_133[] = {27603778,3666240,28820546,49,256,1024};
int meta_buf_134[] = {3928384,3928640,28820546,28808002,256,256,256,49};
int meta_buf_135[] = {28808002,23552066,1,256,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_136[] = {23552066,3928896,28770370,49,256,2304};
int meta_buf_137[] = {4518720,4518976,28770370,28757826,256,256,256,49};
int meta_buf_138[] = {28757826,4519232,27051842,49,1024,256};
int meta_buf_139[] = {4782400,4781376,27754306,27051842,27152194,49,1024,49,1024,49};
int meta_buf_140[] = {27152194,27102018,49,1024,1024,49};
int meta_buf_141[] = {27102018,4783424,28833090,49,256,1024};
int meta_buf_142[] = {5045824,5045568,28833090,28833090,256,256,256,49};
int meta_buf_143[] = {28833090,23777858,1,256,7,7,7,7,3,3,1,1,1,1,1,1};
int meta_buf_144[] = {23777858,5046080,28795458,49,256,2304};
int meta_buf_145[] = {5635904,5636160,28795458,28858178,256,256,256,49};
int meta_buf_146[] = {28858178,5636416,27704130,49,1024,256};
int meta_buf_147[] = {5898560,5899584,27704130,27152194,27955010,1024,49,1024,1024,49};
int meta_buf_148[] = {27955010,28883266,1,7,7,1024,1,1,7,7,1,1,0,0};
int meta_buf_149[] = {28883266,28884290,1024};
int meta_buf_150[] = {28884290,5900608,28885314,1,2,1024};
int meta_buf_151[] = {5902656,28885314,28885314,2};
int* meta_buffers[] = {meta_buf_0,meta_buf_1,meta_buf_2,meta_buf_3,meta_buf_4,meta_buf_5,meta_buf_6,meta_buf_7,meta_buf_8,meta_buf_9,meta_buf_10,meta_buf_11,meta_buf_12,meta_buf_13,meta_buf_14,meta_buf_15,meta_buf_16,meta_buf_17,meta_buf_18,meta_buf_19,meta_buf_20,meta_buf_21,meta_buf_22,meta_buf_23,meta_buf_24,meta_buf_25,meta_buf_26,meta_buf_27,meta_buf_28,meta_buf_29,meta_buf_30,meta_buf_31,meta_buf_32,meta_buf_33,meta_buf_34,meta_buf_35,meta_buf_36,meta_buf_37,meta_buf_38,meta_buf_39,meta_buf_40,meta_buf_41,meta_buf_42,meta_buf_43,meta_buf_44,meta_buf_45,meta_buf_46,meta_buf_47,meta_buf_48,meta_buf_49,meta_buf_50,meta_buf_51,meta_buf_52,meta_buf_53,meta_buf_54,meta_buf_55,meta_buf_56,meta_buf_57,meta_buf_58,meta_buf_59,meta_buf_60,meta_buf_61,meta_buf_62,meta_buf_63,meta_buf_64,meta_buf_65,meta_buf_66,meta_buf_67,meta_buf_68,meta_buf_69,meta_buf_70,meta_buf_71,meta_buf_72,meta_buf_73,meta_buf_74,meta_buf_75,meta_buf_76,meta_buf_77,meta_buf_78,meta_buf_79,meta_buf_80,meta_buf_81,meta_buf_82,meta_buf_83,meta_buf_84,meta_buf_85,meta_buf_86,meta_buf_87,meta_buf_88,meta_buf_89,meta_buf_90,meta_buf_91,meta_buf_92,meta_buf_93,meta_buf_94,meta_buf_95,meta_buf_96,meta_buf_97,meta_buf_98,meta_buf_99,meta_buf_100,meta_buf_101,meta_buf_102,meta_buf_103,meta_buf_104,meta_buf_105,meta_buf_106,meta_buf_107,meta_buf_108,meta_buf_109,meta_buf_110,meta_buf_111,meta_buf_112,meta_buf_113,meta_buf_114,meta_buf_115,meta_buf_116,meta_buf_117,meta_buf_118,meta_buf_119,meta_buf_120,meta_buf_121,meta_buf_122,meta_buf_123,meta_buf_124,meta_buf_125,meta_buf_126,meta_buf_127,meta_buf_128,meta_buf_129,meta_buf_130,meta_buf_131,meta_buf_132,meta_buf_133,meta_buf_134,meta_buf_135,meta_buf_136,meta_buf_137,meta_buf_138,meta_buf_139,meta_buf_140,meta_buf_141,meta_buf_142,meta_buf_143,meta_buf_144,meta_buf_145,meta_buf_146,meta_buf_147,meta_buf_148,meta_buf_149,meta_buf_150,meta_buf_151};

extern "C" void init() {
    //static_buffer = (float*)malloc(28885316 * sizeof(float));
}

extern "C" float* get_static_buffer(void) {
    return static_buffer;
}

extern "C" float* allocate_dynamic_buffer(int count) {
    if (dynamic_buffer) {
        free(dynamic_buffer);
        dynamic_buffer = nullptr;
    }
    dynamic_buffer = (float*)malloc(count * sizeof(float));
    return dynamic_buffer;
}

extern "C" float* get_dynamic_buffer(void) {
    return dynamic_buffer;
}
extern "C" void set_placeholder_value(int kernel_order, int offset, int value) {
    meta_buffers[kernel_order][offset] = value;
}

void transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    float * v2 = (static_buffer + meta_buffer[1]);
    const int v3 = meta_buffer[2];
    const int v4 = meta_buffer[3];
    const int D0 = meta_buffer[4];
    const int D1 = meta_buffer[5];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v5 = v1[d0*v3 + d1];
            float v6;
            {
                v6 = v5;
            }
            v2[d0 + d1*v4] = v6;
        }
    }
}


void im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(const int * meta_buffer)
{
    const float *im = (static_buffer + meta_buffer[0]);
    float *col = (static_buffer + meta_buffer[1]);

    const int N = meta_buffer[2];
    const int C1 = meta_buffer[3];
    const int H1 = meta_buffer[4];
    const int W1 = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int DH = meta_buffer[10];
    const int DW = meta_buffer[11];
    const int SH = meta_buffer[12];
    const int SW = meta_buffer[13];
    const int PH = meta_buffer[14];
    const int PW = meta_buffer[15];

    for (int gid = 0; gid < N*H2*W2*KH*KW*C1; gid += 1) {
        const int c1 = gid % C1;
        const int kw = gid / C1 % KW;
        const int kh = gid / C1 / KW % KH;
        const int w2 = gid / C1 / KW / KH % W2;
        const int h2 = gid / C1 / KW / KH / W2 % H2;
        const int  n = gid / C1 / KW / KH / W2 / H2;

        const int h1 = h2 * SH - PH + kh * DH;
        const int w1 = w2 * SW - PW + kw * DW;

        col[gid] = (h1 < 0 || h1 >= H1 || w1 < 0 || w1 >= W1) ? 0 : im[((n*H1+h1)*W1+w1)*C1+c1];
    }
}


#ifndef INCLUDE_EIGEN
#define INCLUDE_EIGEN
#include <Eigen/Dense>
#endif

void tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(const int * meta_buffer)
{
    float *A = (static_buffer + meta_buffer[0]);
    float *B = (static_buffer + meta_buffer[1]);
    float *C = (static_buffer + meta_buffer[2]);

    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > a_mat(A, meta_buffer[3], meta_buffer[5]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::ColMajor> > b_mat(B, meta_buffer[5], meta_buffer[4]);
    Eigen::Map<Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> > c_mat(C, meta_buffer[3], meta_buffer[4]);

    c_mat.noalias() = a_mat * b_mat;
}


void fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9 * v8;
            }
            float v11;
            {
                v11 = v10 + v7;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0 + d1*v6] = v12;
        }
    }
}


void maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];
    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = -1e7;
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v = v > X[((n * H1 + h1) * W1 + w1) * C + c] ? v : X[((n * H1 + h1) * W1 + w1) * C + c];
            }
        }

        Y[gid] = v;
    }
}


void fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    float * v4 = (static_buffer + meta_buffer[3]);
    const int v5 = meta_buffer[4];
    const int v6 = meta_buffer[5];
    const int D0 = meta_buffer[6];
    const int D1 = meta_buffer[7];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v7 = v1[d0];
        const float v8 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v9 = v3[d0 + d1*v5];
            float v10;
            {
                v10 = v9 * v7;
            }
            float v11;
            {
                v11 = v10 + v8;
            }
            float v12;
            {
                v12 = v11 > 0 ? v11 : 0;
            }
            v4[d0 + d1*v6] = v12;
        }
    }
}


void fusedelementwise_48fe545130f9b22252a6f3ad80204783e4c3888aab77f81cbbf0d051(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v4[d0 + d1*v7];
            float v14;
            {
                v14 = v13 * v11;
            }
            const float v15 = v5[d0 + d1*v8];
            float v16;
            {
                v16 = v15 * v10;
            }
            float v17;
            {
                v17 = v14 + v16;
            }
            float v18;
            {
                v18 = v12 + v17;
            }
            float v19;
            {
                v19 = v18 > 0 ? v18 : 0;
            }
            v6[d0*v9 + d1] = v19;
        }
    }
}


void fusedelementwise_f1a9aaf4a78be9277e01ae4e24344cd4c796da972f0b7ec9904d90a3(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v4[d0 + d1*v7];
            float v12;
            {
                v12 = v11 * v10;
            }
            const float v13 = v3[d0*v6 + d1];
            float v14;
            {
                v14 = v13 + v12;
            }
            float v15;
            {
                v15 = v14 + v9;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0*v8 + d1] = v16;
        }
    }
}


void fusedelementwise_0c1a384b03a4a9de90d4513d4c35e2929935cbf6defd0bf1c19aed79(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v4[d0 + d1*v7];
            float v12;
            {
                v12 = v11 * v9;
            }
            const float v13 = v3[d0*v6 + d1];
            float v14;
            {
                v14 = v13 + v12;
            }
            float v15;
            {
                v15 = v14 + v10;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0*v8 + d1] = v16;
        }
    }
}


void fusedelementwise_87faf1ba3dfbeab3a66f89acb03ca353636cb1645ba55622385f638f(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11 * v10;
            }
            const float v13 = v4[d0*v7 + d1];
            float v14;
            {
                v14 = v13 + v12;
            }
            float v15;
            {
                v15 = v14 + v9;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0*v8 + d1] = v16;
        }
    }
}


void fusedelementwise_035a37d130311f04aef56e84d962170436c6428030ea104078d8eba8(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v4[d0 + d1*v7];
            float v14;
            {
                v14 = v13 * v10;
            }
            const float v15 = v5[d0 + d1*v8];
            float v16;
            {
                v16 = v15 * v11;
            }
            float v17;
            {
                v17 = v14 + v16;
            }
            float v18;
            {
                v18 = v12 + v17;
            }
            float v19;
            {
                v19 = v18 > 0 ? v18 : 0;
            }
            v6[d0*v9 + d1] = v19;
        }
    }
}


void fusedelementwise_eee80fcd449afebfc772e82441ca92feefbbbefc1b1d992cf70aeb25(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11 * v9;
            }
            const float v13 = v4[d0*v7 + d1];
            float v14;
            {
                v14 = v13 + v12;
            }
            float v15;
            {
                v15 = v14 + v10;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0*v8 + d1] = v16;
        }
    }
}


void fusedelementwise_2fd465b180b7eca1973482e19d4779b3f9722116145a96a09acca9fa(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    const float * v5 = (static_buffer + meta_buffer[4]);
    float * v6 = (static_buffer + meta_buffer[5]);
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int v9 = meta_buffer[8];
    const int D0 = meta_buffer[9];
    const int D1 = meta_buffer[10];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v10 = v1[d0];
        const float v11 = v2[d0];
        const float v12 = v3[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v13 = v4[d0 + d1*v7];
            float v14;
            {
                v14 = v13 * v10;
            }
            const float v15 = v5[d0 + d1*v8];
            float v16;
            {
                v16 = v15 * v12;
            }
            float v17;
            {
                v17 = v14 + v16;
            }
            float v18;
            {
                v18 = v11 + v17;
            }
            float v19;
            {
                v19 = v18 > 0 ? v18 : 0;
            }
            v6[d0*v9 + d1] = v19;
        }
    }
}


void fusedelementwise_91acb2d0065373a0d9456df67f95541d1b72239e5ec7dcb259fc3b39(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    const float * v3 = (static_buffer + meta_buffer[2]);
    const float * v4 = (static_buffer + meta_buffer[3]);
    float * v5 = (static_buffer + meta_buffer[4]);
    const int v6 = meta_buffer[5];
    const int v7 = meta_buffer[6];
    const int v8 = meta_buffer[7];
    const int D0 = meta_buffer[8];
    const int D1 = meta_buffer[9];
    int d0;
    for (d0 = ((1 > 8) ? (0 % (1 / 8)) : 0); d0 < D0; d0 += ((1 > 8) ? (1 / 8) : 1)) {
        const float v9 = v1[d0];
        const float v10 = v2[d0];
        int d1;
        for (d1 = ((1 > 8) ? (0 / (1 / 8)) : 0); d1 < D1; d1 += ((1 > 8) ? 8 : 1)) {
            const float v11 = v3[d0 + d1*v6];
            float v12;
            {
                v12 = v11 * v10;
            }
            const float v13 = v4[d0*v7 + d1];
            float v14;
            {
                v14 = v13 + v12;
            }
            float v15;
            {
                v15 = v14 + v9;
            }
            float v16;
            {
                v16 = v15 > 0 ? v15 : 0;
            }
            v5[d0 + d1*v8] = v16;
        }
    }
}


void averagepooling2d_315133a9f01ff68a853da10590f9591258950d2d5ab8b7bac49ab0ea(const int * meta_buffer)
{
    const float *X = (static_buffer + meta_buffer[0]);
    float *Y = (static_buffer + meta_buffer[1]);
    const int N = meta_buffer[2];
    const int H1 = meta_buffer[3];
    const int W1 = meta_buffer[4];
    const int C = meta_buffer[5];
    const int H2 = meta_buffer[6];
    const int W2 = meta_buffer[7];

    const int KH = meta_buffer[8];
    const int KW = meta_buffer[9];
    const int SH = meta_buffer[10];
    const int SW = meta_buffer[11];
    const int PH = meta_buffer[12];
    const int PW = meta_buffer[13];

    for (int gid = 0; gid < N * H2 * W2 * C; gid += 1) {
        const int c = gid % C;
        const int w2 = gid / C % W2;
        const int h2 = gid / C / W2 % H2;
        const int n = gid / C / W2 / H2;

        float v = 0;
        
        for (int kh = 0; kh < KH; kh++) {
            const int h1 = h2 * SH - PH + kh;
            if (h1 < 0 || h1 >= H1) continue;

            for (int kw = 0; kw < KW; kw++) {
                const int w1 = w2 * SW - PW + kw;
                if (w1 < 0 || w1 >= W1) continue;

                v += X[((n * H1 + h1) * W1 + w1) * C + c];
                
            }
        }
        v /= KH * KW;

        Y[gid] = v;
    }
}


void transpose_6c1a5765207ae813be68b295e01081389ed8f452899e3a431cad37f6(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    float * v2 = (static_buffer + meta_buffer[1]);
    const int D0 = meta_buffer[2];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v3 = v1[d0];
        float v4;
        {
            v4 = v3;
        }
        v2[d0] = v4;
    }
}


void elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(const int * meta_buffer)
{
    const float * v1 = (static_buffer + meta_buffer[0]);
    const float * v2 = (static_buffer + meta_buffer[1]);
    float * v3 = (static_buffer + meta_buffer[2]);
    const int D0 = meta_buffer[3];
    int d0;
    for (d0 = 0; d0 < D0; d0 += 1) {
        const float v4 = v1[d0];
        const float v5 = v2[d0];
        float v6;
        {
            v6 = v5 + v4;
        }
        v3[d0] = v6;
    }
}

extern "C" void run() {
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_0);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_1);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_2);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_3);
maxpooling2d_386ebef75ea973afd833e12e5ea8f6c97456944cd3812afb94b9bb4e(meta_buf_4);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_5);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_6);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_7);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_8);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_9);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_10);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_11);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_12);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_13);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_14);
fusedelementwise_48fe545130f9b22252a6f3ad80204783e4c3888aab77f81cbbf0d051(meta_buf_15);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_16);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_17);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_18);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_19);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_20);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_21);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_22);
fusedelementwise_f1a9aaf4a78be9277e01ae4e24344cd4c796da972f0b7ec9904d90a3(meta_buf_23);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_24);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_25);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_26);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_27);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_28);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_29);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_30);
fusedelementwise_0c1a384b03a4a9de90d4513d4c35e2929935cbf6defd0bf1c19aed79(meta_buf_31);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_32);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_33);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_34);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_35);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_36);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_37);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_38);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_39);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_40);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_41);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_42);
fusedelementwise_48fe545130f9b22252a6f3ad80204783e4c3888aab77f81cbbf0d051(meta_buf_43);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_44);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_45);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_46);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_47);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_48);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_49);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_50);
fusedelementwise_0c1a384b03a4a9de90d4513d4c35e2929935cbf6defd0bf1c19aed79(meta_buf_51);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_52);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_53);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_54);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_55);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_56);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_57);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_58);
fusedelementwise_87faf1ba3dfbeab3a66f89acb03ca353636cb1645ba55622385f638f(meta_buf_59);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_60);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_61);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_62);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_63);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_64);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_65);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_66);
fusedelementwise_87faf1ba3dfbeab3a66f89acb03ca353636cb1645ba55622385f638f(meta_buf_67);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_68);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_69);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_70);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_71);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_72);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_73);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_74);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_75);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_76);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_77);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_78);
fusedelementwise_035a37d130311f04aef56e84d962170436c6428030ea104078d8eba8(meta_buf_79);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_80);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_81);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_82);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_83);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_84);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_85);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_86);
fusedelementwise_f1a9aaf4a78be9277e01ae4e24344cd4c796da972f0b7ec9904d90a3(meta_buf_87);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_88);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_89);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_90);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_91);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_92);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_93);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_94);
fusedelementwise_87faf1ba3dfbeab3a66f89acb03ca353636cb1645ba55622385f638f(meta_buf_95);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_96);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_97);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_98);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_99);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_100);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_101);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_102);
fusedelementwise_eee80fcd449afebfc772e82441ca92feefbbbefc1b1d992cf70aeb25(meta_buf_103);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_104);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_105);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_106);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_107);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_108);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_109);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_110);
fusedelementwise_87faf1ba3dfbeab3a66f89acb03ca353636cb1645ba55622385f638f(meta_buf_111);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_112);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_113);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_114);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_115);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_116);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_117);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_118);
fusedelementwise_0c1a384b03a4a9de90d4513d4c35e2929935cbf6defd0bf1c19aed79(meta_buf_119);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_120);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_121);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_122);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_123);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_124);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_125);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_126);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_127);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_128);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_129);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_130);
fusedelementwise_2fd465b180b7eca1973482e19d4779b3f9722116145a96a09acca9fa(meta_buf_131);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_132);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_133);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_134);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_135);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_136);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_137);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_138);
fusedelementwise_0c1a384b03a4a9de90d4513d4c35e2929935cbf6defd0bf1c19aed79(meta_buf_139);
transpose_3ede431373fd6b14a21ca5a7f2fab289eb4c42220e346f22acc816e8(meta_buf_140);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_141);
fusedelementwise_14fa2da6de1a835ea9d3c04583df503ea797b3eb992eb510f386351b(meta_buf_142);
im2col_54f86552263d1a348fd988a8122143d1a6ec1c1aa7867ba5833442fb(meta_buf_143);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_144);
fusedelementwise_2a96163527a14b08c811924f90c922063ed658464e0ab43e1ba54c11(meta_buf_145);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_146);
fusedelementwise_91acb2d0065373a0d9456df67f95541d1b72239e5ec7dcb259fc3b39(meta_buf_147);
averagepooling2d_315133a9f01ff68a853da10590f9591258950d2d5ab8b7bac49ab0ea(meta_buf_148);
transpose_6c1a5765207ae813be68b295e01081389ed8f452899e3a431cad37f6(meta_buf_149);
tensordot_b0c87b9ad9c24d5c638538a68fd9e1ad2b472c70c0e98883fad5c6af(meta_buf_150);
elementwiseadd_98450d361d3b8b06ad718e1e961bda61506f2baab3157c18aecbf897(meta_buf_151);

}

