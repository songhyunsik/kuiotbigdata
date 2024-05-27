#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main(int argc, char *argv[]) {
	Mat src = imread(folder + "milkdrop.bmp");
	Mat bin;
	threshold(src, bin, 120, 255, THRESH_BINARY);

	Mat erodeMat, dilateMat;
	erode(bin, erodeMat, Mat());
	dilate(bin, dilateMat, Mat());

	imshow("bin", bin);
	imshow("erode", erodeMat);
	imshow("dilate", dilateMat);
	imshow("src", src);
	waitKey();
	destroyAllWindows();
	return 0;
}