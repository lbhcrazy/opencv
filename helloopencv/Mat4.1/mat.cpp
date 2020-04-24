#include<opencv2/opencv.hpp>
//#include<iostream
using namespace cv;
int main()
{
	Mat A, C;
	A = imread("C:\\Users\\Administrator\\Desktop\\wo.jpg");
	imshow("a", A);
	Mat B(A);
	imshow("B", B);
	C = B;
	imshow("C", C);
	Mat D(A, Rect(10, 10, 100, 100));
	imshow("d", D);
	Point2f p(2, 6);
	std::cout << "二维点p="<< p<< ";\n" <<std:: endl;
	vector<float> ve;
	ve.push_back(3);
	ve.push_back(5);
	ve.push_back(7);
	std::cout << "floatvector=" << Mat(ve) << std::endl;
	vector<Point2f>pointVe(20);
	for (int i_size = 0; i_size < pointVe.size(); ++i_size)
	{
		pointVe[i_size] = Point2f((float)i_size * 5, (float)(i_size % 7));

	}
	std::cout << "二维点p=" << pointVe<< ";" ;

	waitKey();

	return 0;

}