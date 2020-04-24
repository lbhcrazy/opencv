#ifndef _H_MAT
#define _H_MAT
#include<opencv2/opencv.hpp>
#define WINDOW_WIDTH 600
class Base{

public:
	void drawLine(cv::Mat img);//绘制线
	void drawEllipse(cv::Mat, double angle);//绘制椭圆
	void drawRectangle(cv::Mat,int type);//绘制矩形
	void drawCircle(cv::Mat,cv::Point center);//绘制圆
	void drawFillpoly(cv::Mat);
	void pixelCount(cv::Mat,int type);//计算像素(灰度图像|彩色图像)
	void imageRIO(cv::Mat img,cv::Mat logo);//感应区
	void drawLineBlend(cv::Mat, double a, cv::Mat, double b);
	void drawBoxfilter(cv::Mat);//方波滤波
	void drawBlur(cv::Mat);//均值滤波
	void drawGaussianBlur(cv::Mat);//高斯滤波
};
#endif