//#include<iostream>
//#include<opencv2/core.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>
//
//using namespace cv;
//using namespace std;
//
//int main() {
//	Mat drawing= Mat::zeros(Size(500, 500), CV_8UC3);
//	vector<vector<Point>> pts = { {Point(175,150),Point(275,150),Point(350,250),Point(275,350),Point(175,350),Point(100,250)},{Point(175,140),Point(275,140),Point(225,40)} };
//	fillPoly(drawing, pts, Scalar(225, 250, 0));
//	//vector<Point>pts = { Point(175,150),Point(275,150),Point(350,250),Point(275,350),Point(175,350),Point(100,250) };
//	//fillConvexPoly(drawing, pts, Scalar(225, 250, 0));
//	//vector<vector<Point>> pts = { {Point(175,150),Point(275,150),Point(350,250),Point(275,350),Point(175,350),Point(100,250)} };
//	//polylines(drawing, pts,1, Scalar(225, 250, 0),8);
//	imshow("image", drawing);
//	waitKey(0);
//	return 0;
//}