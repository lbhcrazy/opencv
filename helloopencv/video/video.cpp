#include<opencv2/opencv.hpp>
using namespace cv;
int main()
{
	VideoCapture capture(0);
	while (1)
	{
		Mat frame;
		Mat grayimg, blurimg, cannyimg;
		capture >> frame;
		imshow("frame", frame);

		cvtColor(frame, grayimg, CV_BGR2GRAY);
		imshow("gray", grayimg);
		blur(grayimg, blurimg, Size(7, 7));
		Canny(blurimg, cannyimg, 3, 9, 3);
		imshow("±ßÔµ¼ì²â", cannyimg);
		if(waitKey(30)>=0) break;
	}
	return 0;
}