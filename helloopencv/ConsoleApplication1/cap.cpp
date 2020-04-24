#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main()
{
	Mat srcImg = imread("C:\\Users\\Administrator\\Desktop\\wo.jpg");
	//imshow("srcimg", srcImg);
	Mat dstImg,edge, grayimg;
	cvtColor(srcImg, grayimg, CV_BGR2GRAY);
	//imshow("grayimg", grayimg);
	dstImg.create(srcImg.size(), srcImg.type());
	blur(srcImg, dstImg,Size(7,7));
	Canny(dstImg, edge, 3, 9, 3);
	imshow("dstimg",edge);
	waitKey();
	return 0;

}