
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main() {
	
		Mat src = imread(folder + "circuit.bmp", IMREAD_COLOR);
		Mat temp1 = imread(folder + "crystal.bmp", IMREAD_COLOR);

	
	waitKey();
	destroyAllWindows();
	return 0;
}