//#include <iostream>
//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//
//using namespace cv;
//using namespace std;
//
//int main()
//{
//	//create window 
//	Mat drawing;
//	drawing = Mat::zeros(Size(500, 500), CV_8UC3);
//	arrowedLine(drawing, Point(100, 250), Point(400, 250), Scalar(251, 127, 80), 5);
//	imshow("image", drawing);
//	waitKey(0);
//	return 0;
//}

//	int main(){
//	Mat drawing;
//	drawing = Mat::zeros(Size(500, 500), CV_8UC3);
//	line(drawing, Point(50, 250) ,Point(100, 250), Scalar(250,250,250), 30);
//	line(drawing, Point(101, 250), Point(150, 250), Scalar(0,0,250), 30);
//	line(drawing, Point(155, 250), Point(200, 250), Scalar(250, 250, 250), 30);
//	line(drawing, Point(201, 250), Point(250, 250), Scalar(0,0,250), 30);
//	line(drawing, Point(251, 250), Point(300, 250), Scalar(250, 250, 250), 30);
//	line(drawing, Point(301, 250), Point(360, 250), Scalar(0, 0, 250), 30);
//	circle(drawing, Point(345, 245), 3, Scalar(0), FILLED);
//	circle(drawing, Point(345, 255), 3, Scalar(0), FILLED);
//	
//	//display line on window
//	imshow("image", drawing);
//	waitKey(0);
//	return 0;
//}

//int main() {
//	Mat drawing = Mat::zeros(Size(500, 500), CV_8UC3);
//	line(drawing, Point(250, 250), Point(250, 250), Scalar(60, 10, 30), 100);
//	imshow("image", drawing);
//	waitKey(0);
//	return 0;
//}

//int main() {
//	Mat shape = Mat::zeros(Size(400, 400), CV_8UC3);
//	circle(shape, Point(300, 200), 50, Scalar(20, 250, 0), FILLED);
//	circle(shape, Point(100, 200), 50, Scalar(0, 250, 20), FILLED);
//	imshow("image", shape);
//	waitKey(0);
//	return 0;
//}

