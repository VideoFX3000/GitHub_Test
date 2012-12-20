#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
//1
//Zrd
int main ()
{
	VideoCapture video;

	video.open(0);

	if (video.isOpened())
		cout << "open";

	getchar();
	getchar();
}