#include "opencv2/opencv.hpp"
#include "opencv2/freetype.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main() {
    Scalar white = Scalar(255, 255, 255);
    Scalar yellow = Scalar(0, 255, 255);
    Scalar blue = Scalar(255, 0, 0);
    Scalar green = Scalar(0, 255, 0);
    Scalar red = Scalar(0, 0, 255);
    Mat img(400, 640, CV_8UC3, Scalar(255, 255, 255));

   Ptr<freetype::FreeType2> tt2 = freetype::createFreeType2();
   tt2->loadFontData("/user/share/fonts/fonts-go/Go-Mono.ttf", 0);
   String text = u8"안녕하세요. ut-8테스트 입니다.";
   int fontHeight = 60;
   Size textSize = tt2->getTextSize(text, fontHeight, -1, 0);

    tt2->putText(img, text, Point(20, 60 + textSize.height), fontHeight, green, -1, LINE_AA, true);

    imshow("img", img);
    waitKey(0);
    destroyAllWindows();
  return 0;
}