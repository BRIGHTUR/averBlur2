#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);
	double scale = 0.5;

	while (1) {
		Mat frame;
		Mat hsvMat;
		Mat detectMat;
		cap >> frame;
		Mat fframe;
		GaussianBlur(frame, fframe, Size(5, 5), 3, 4);
		imshow("frame", fframe);
		waitKey(30);
	}
}