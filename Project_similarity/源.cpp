#include "opencv2\opencv.hpp"
using namespace cv;
int main()
{   
	Mat picture = imread("1.png");    //ͼƬ������ӵ�����Ŀ��    //Ҳ���Ǻ�test.cpp�ļ�����һ���ļ����£�����  
	imshow("���Գ���", picture);   
	waitKey(20150901);
}
