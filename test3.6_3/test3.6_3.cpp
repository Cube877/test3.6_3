// test3.6_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;

int main()
{
	cv::Mat dispMat = imread("E:\\Picture\\Camera Roll\\1.jpg");
	cv::Point pt;
	cv::Point pt1;
	cv::Point pt2;
	pt.x = 100;
	pt.y = 100;
	circle(dispMat, pt, 50, CV_RGB(255,0,0), 1, 8, 0);
	pt1.x = 150;
	pt1.y = 150;
	pt2.x = 150;
	pt2.y = 350;
	line(dispMat, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::Rect rect;
	rect.x = 200;
	rect.y = 200;
	rect.width = 100;
	rect.height = 100;
	rectangle(dispMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	imshow("dispMat", dispMat);
	waitKey(0);
    return 0;
}

