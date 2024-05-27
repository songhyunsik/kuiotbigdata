#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;
String folder = "/home/songhyunsik/OpenCV/data/";

int main()
{
    String name = "Jane";
	int age = 10;
	Point pt1(100, 200);
	vector<int> v = {74, 98, 29};
	Mat mat1 = (Mat_<int>(2, 2) << 1, 2, 3, 4);

	FileStorage fs;
	fs.open(folder + "mydata.json", FileStorage::WRITE);
	if (!fs.isOpened()) {
		cerr << "File open failed!" << endl;
		return 1;
	}
	fs["name"] >> name;
	fs["age"] >> age;
	fs["point"] >> pt1;
	fs["v"] >> v;
	fs["mat1"] >> mat1;

	fs.release();

    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "point: " << pt1 << endl;
    cout << "V: {";
    for(auto i : v) {
        cout << i << ", ";
    }
    cout << " }" << endl;
    cout << "mat1: " << mat1 << endl;
	return 0;
}