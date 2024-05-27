#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main() {
    Mat src = imread(folder + "lenna.bmp", IMREAD_GRAYSCALE);
    if (src.empty()){
        cout << "empthy";
        return 1;
    }
    Mat original = src.clone();
    Mat src2 = src.clone();
    // src = src * 2.f;    // 1번째 방법
    // src2 = src2 + (src2 -100) * 1.f;  // 2번째 방법

    cout << "orginal mean : " << mean(original) << endl;
    imshow("original", original); 
    imshow("src", src);
    imshow("src2", src2);
    waitKey(0);
    destroyAllWindows();
    return 0;
}