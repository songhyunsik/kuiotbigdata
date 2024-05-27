#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main() {
	Mat src = imread(folder + "butterfly.jpg");

    for(int i =0; i<100; i++) {
        Vec3b &pixel = src.at<Vec3b>(0, 0);
        uchar b1 = pixel[0]; 
        uchar g1 = pixel[1];
        uchar r1 = pixel[2];
        cout << "bgr: (" << b1 << ", " << g1 << ", " << r1 << ")" << endl;
        cout << pixel << endl;
        pixel[0] = 0;
        pixel[1] = 0; 
        pixel[2] = 255;
        cout << "bgr: (" << b1 << ", " << g1 << ", " << r1 << ")" << endl;
        cout << pixel << endl;
    }
	imshow("src", src);
	waitKey();
	destroyAllWindows();
	return 0;
}