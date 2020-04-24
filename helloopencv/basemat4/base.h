#ifndef _H_MAT
#define _H_MAT
#include<opencv2/opencv.hpp>
#define WINDOW_WIDTH 600
class Base{

public:
	void drawLine(cv::Mat img);//������
	void drawEllipse(cv::Mat, double angle);//������Բ
	void drawRectangle(cv::Mat,int type);//���ƾ���
	void drawCircle(cv::Mat,cv::Point center);//����Բ
	void drawFillpoly(cv::Mat);
	void pixelCount(cv::Mat,int type);//��������(�Ҷ�ͼ��|��ɫͼ��)
	void imageRIO(cv::Mat img,cv::Mat logo);//��Ӧ��
	void drawLineBlend(cv::Mat, double a, cv::Mat, double b);
	void drawBoxfilter(cv::Mat);//�����˲�
	void drawBlur(cv::Mat);//��ֵ�˲�
	void drawGaussianBlur(cv::Mat);//��˹�˲�
};
#endif