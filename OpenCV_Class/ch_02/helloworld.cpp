#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>
using namespace cv;
using namespace std;

std::string folder = "/home/songhyunsik/OpenCV/data/";
int main()
{
    cout << "hello, World" << endl;
    cv::Mat img;
    img = cv::imread(folder + "lenna.bmp");
    cv::imshow("image", img);
    cv::waitKey(0);
    return 0;
}