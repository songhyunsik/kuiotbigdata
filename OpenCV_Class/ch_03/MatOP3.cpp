#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

String folder = "/home/songhyunsik/OpenCV/data/";
int main()
{
    // Mat 예제
    Mat img1 = imread(folder + "cat.bmp");
    Rect roi(220, 120, 200, 200);
    Mat img2 = img1(roi);
    Mat img3 = img1(roi).clone();

    img2 = ~img2;
    img1.setTo(Scalar(0, 255, 255));

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);
    waitKey(0);

    return 0;
}