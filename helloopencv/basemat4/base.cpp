#include"base.h"
using namespace cv;
void Base::drawLine(Mat img)//绘制线
{
		line(img,
			Point(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2),
			Point(WINDOW_WIDTH / 8, WINDOW_WIDTH / 8),
			Scalar(255, 129, 0),
			2,
			8);
}
void Base::drawEllipse(Mat img, double angle)//不同角度，相同的椭圆
{
	ellipse(img,
		Point(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2),
		Size(WINDOW_WIDTH / 4, WINDOW_WIDTH / 16),
		angle,
		0,
		360,
		Scalar(255, 129, 0),
		2,
		8);
}
void Base::drawRectangle(Mat img,int type)//绘制矩形
{
	if (1 <= type)
		rectangle(img,
		Point(WINDOW_WIDTH / 2, WINDOW_WIDTH),
		Point(WINDOW_WIDTH / 4, WINDOW_WIDTH / 4),
		Scalar(255, 129, 0),
		2,
		8);
	else
		rectangle(img,
		Rect(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2, 100, 100),
		Scalar(255, 129, 0),
		2,
		8);
}
void Base:: drawCircle(Mat img,Point center)//绘制圆形
{
	circle(img,
		center,
		WINDOW_WIDTH/8,
		Scalar(255,129,0),
		1,
		8);
}
void Base::drawFillpoly(Mat img)

{
	//fillPoly();
}
void Base::pixelCount(Mat img,int type)
{
	Mat dstImg;
	dstImg = img.clone();
	//if (0== type)
		//cvtColor(img, dstImg, CV_BGR2GRAY);
		int row = dstImg.rows;
		int col = dstImg.cols*dstImg.channels();
		for (int irow = 0; irow <row; irow++)
		{
			uchar *data = dstImg.ptr<uchar>(irow);
			for (int jcol = 0; jcol < col; jcol++)
			{
				std::cout << data[jcol] << ",";
			}
			std::cout << std::endl;
		}
	
}

void Base::imageRIO(Mat img,Mat logo)
{
	Mat imgRIO = img(Rect(10,10,logo.cols,logo.rows));
	Mat mask;
	cvtColor(logo, mask,CV_BGR2GRAY);
	logo.copyTo(imgRIO, mask);
	imshow("RIO", img);

}

void Base::drawLineBlend(Mat img, double a, Mat img1,double b)
{
	Mat dstImg;
	addWeighted(img, 0.5, img1, 0.5,0, dstImg);
	imshow("blend",dstImg);
}
void Base::drawBoxfilter(Mat img)
{
	Mat dstImg;
	boxFilter(img, dstImg, img.depth(), Size(5, 5), Point(-1, -1), true);
	imshow("box",dstImg);
}
void Base::drawBlur(Mat img)
{
	Mat dstImg;
	blur(img,dstImg,Size(3,3));
	imshow("blurimg", dstImg);
}
void Base::drawGaussianBlur(Mat img)
{
	Mat gaussianImg;
	GaussianBlur(img,gaussianImg,Size(3,3),3,0);
	imshow("gaussian", gaussianImg);
}






