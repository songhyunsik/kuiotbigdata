#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main() {
	Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);
    vector<Mat> dsts; // 매트릭스를 집어넣을 수 있는 배열
    int sigma = 3;
    for(int alpha = 3; alpha <= 19; alpha+=2) {
        Mat blured;
        GaussianBlur(src, blured, Size(0, 0), sigma);
        alpha = (float)alpha;
        Mat dst = (1 + alpha) * src - alpha * blured;

        dsts.push_back(dst);
    }

    imshow("src", src);
    int i = 0;
    // type casting int to String
    for(auto dst : dsts) {
        imshow("dst" + to_string(i+1), dst);
        i++;
    }

    waitKey();
	destroyAllWindows();
	return 0;
}