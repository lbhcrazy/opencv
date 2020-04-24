
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
int main(){
	Mat srcimg = imread("C:\\Users\\Administrator\\Desktop\\1.jpg");
	imshow("image", srcimg);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat resultImg;
	erode(srcimg, resultImg, element);
	imshow("erodeimg", resultImg);
	waitKey();
}