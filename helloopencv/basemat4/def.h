#include<opencv2/opencv.hpp>
#define WINDOW_WIDTH 600
class base{
private:
    int thickless;
	int linType;

	/*define function*/
public:
	void drawEllipse(Mat img, double angle);
	void drawLine(Mat img);

};