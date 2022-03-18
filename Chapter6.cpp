#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

/////////////// Color Detection //////////////////////

//void main() {
//
//	string path = "Resources/FYP.png";
//	Mat img = imread(path);
//	Mat imgHSV, mask;
//	int hmin = 0, smin = 0, vmin = 0;
//	int hmax = 179, smax = 255, vmax = 255;
//	//int hmin = 0, smin = 110, vmin = 153;
//	//int hmax = 19, smax = 240, vmax = 255;
//
//	cvtColor(img, imgHSV, COLOR_BGR2HSV);
//
//	namedWindow("Trackbars", (640, 200));
//	createTrackbar("Hue Min", "Trackbars", &hmin, 179);
//	createTrackbar("Hue Max", "Trackbars", &hmax, 179);
//	createTrackbar("Sat Min", "Trackbars", &smin, 255);
//	createTrackbar("Sat Max", "Trackbars", &smax, 255);
//	createTrackbar("Val Min", "Trackbars", &vmin, 255);
//	createTrackbar("Val Max", "Trackbars", &vmax, 255);
//
//	while (true) {
//
//		Scalar lower(hmin, smin, vmin);
//		Scalar upper(hmax, smax, vmax);
//		inRange(imgHSV, lower, upper, mask);
//
//		imshow("Image", img);
//		imshow("Image HSV", imgHSV);
//		imshow("Image Mask", mask);
//
//
//		waitKey(1);
//	}
//}

//void main() {
//
//
//
//	Mat original, splitChannels[3], output;
//
//	original = imread("Resources/FYP.png");
//	split(original, splitChannels);
//
//	imshow("B", splitChannels[0]);
//	imshow("G", splitChannels[1]);
//	imshow("R", splitChannels[2]);
//
//	//equalizeHist(channels[0], channels[0]);
//
//	merge(splitChannels, 3, output);
//
//	imshow("output", output);
//	waitKey(0);
//}

