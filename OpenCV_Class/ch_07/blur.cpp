#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main() {
	Mat src = imread(folder + "rose.bmp", IMREAD_GRAYSCALE);
    vector<Mat> dsts; // 매트릭스를 집어넣을 수 있는 배열
    for(int ksize = 3; ksize <= 19; ksize+=2) {
        Mat dst;
        blur(src, dst, Size(ksize, ksize));
        dsts.push_back(dst);
    }

    imshow("src", src);
    int i = 0;
    // type casting int to String
    for(auto dst : dsts) {
        imshow("dst" + to_string(i), dst);
        i++;
    }

    waitKey();
	destroyAllWindows();
	return 0;
}