#include "opencv2/opencv.hpp"
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

String folder = "/home/songhyunsik/OpenCV/data/";
int main()
{
    Point pt1;
    pt1.x = 5;
    pt1.y = 10;
    Point pt2(10, 20);
    cout << pt1 << endl;
    cout << pt2 << endl;
    cout << pt1 + pt2 << endl;

    // size 예시
    Size sz1;
    sz1.width = 10;
    sz1.height = 20;
    
    Size sz2(100, 200);
    cout << sz1 << sz2 << sz1.area() << sz1.aspectRatio() << endl;
    return 0;
}