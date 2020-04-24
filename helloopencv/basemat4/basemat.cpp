#include"base.h"
using namespace cv;
/******************************************************************
local function
********************************************************************/
static void LOCAL_GetcontratAndBright(cv::Mat img, int contrastValue, int brightValue, void *);
int main()
{ 
	int g_contrastValue = 80;
	int g_brightValue = 80;

	Base  ba;
	Mat img = imread("C:\\Users\\Administrator\\Desktop\\1.jpg");
	Mat logo = imread("C:\\Users\\Administrator\\Desktop\\wo.jpg");
	/**
	ba.drawEllipse(img, 60);
	imshow("ell", img);
	ba.drawLine(img);
	imshow("line", img);
	ba.drawRectangle(img,0);
	Point center = Point(WINDOW_WIDTH / 2, WINDOW_WIDTH / 2);
	ba.drawCircle(img, center);
	imshow("cir", img);
	//ba.pixelCount(img, 0);
	ba.imageRIO(img, logo);
	Mat dstimg;
	ba.drawLineBlend(img, 0.5, img, 0.5);
	imshow("img", img);
	*/
	//Mat dstimg;
	//dstimg = img.zeros(img.size(),img.type());
	imshow("img", logo);
	//createTrackbar("contrst:", "dst win", &g_contrastValue, 300, LOCAL_GetcontratAndBright);
	//LOCAL_GetcontratAndBright(img, dstimg, g_contrastValue, g_brightValue, 0);
	ba.drawBoxfilter(logo);
	ba.drawBlur(logo);
	ba.drawGaussianBlur(logo);

	waitKey();
	return 0;
	
}
static void LOCAL_GetcontratAndBright(cv::Mat img,cv::Mat dstimg,int contrastValue,int brightValue,void *)
{  
	namedWindow("init windows", 1);
	for (int y = 0; y < img.rows; y++){
		for (int x = 0; x < img.cols; x++){
			for (int c = 0; c < 3; c++){
				dstimg.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>((contrastValue*0.01)*(img.at<Vec3b>(y,x)[c])+brightValue);
			}
		}
	}
	imshow("init image", img);
	imshow("dst image", dstimg);

}