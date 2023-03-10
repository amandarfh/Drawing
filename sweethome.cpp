//#include<iostream>
//#include<opencv2/core.hpp>
//#include<opencv2/imgproc.hpp>
//#include<opencv2/highgui.hpp>
//
//using namespace std;
//using namespace cv;
//
//void Kotak(Mat img);
//void Kotakk(Mat img);
//void Segitg(Mat img);
//void Segiem(Mat img);
//void Pintu(Mat img);
//void Jendela(Mat img);
//void Nama(Mat img);
//void Tambahan(Mat img);
//
//
//int main(void) {
//	Mat rumah = Mat::zeros(Size (800, 500), CV_8UC3);
//	Kotak(rumah);
//	Kotakk(rumah);
//	Segitg(rumah);
//	Segiem(rumah);
//	Pintu(rumah);
//	Jendela(rumah);
//	Nama(rumah);
//	Tambahan(rumah);
//	imshow("wow", rumah);
//	waitKey(0);
//	return 0;
//
//}
//
//void Kotak(Mat img) {
//	rectangle(img, Point(250, 250), Point(380, 380), Scalar(90, 90, 150), FILLED);
//}
//
//void Kotakk(Mat img) {
//	rectangle(img, Point(381, 250), Point(550, 380), Scalar(90, 150, 90), FILLED);
//}
//
//void Segitg(Mat img) {
//	vector<Point>pts = { {Point(250,249),Point(315,125),Point(380,249)} };
//	fillConvexPoly(img, pts, Scalar(225, 250, 0));
//}
//
//void  Segiem(Mat img) {
//	vector<Point>pts = { {Point(316,125),Point(475,125),Point(550,249),Point(381,249)}};
//	fillConvexPoly(img, pts, Scalar(225, 0, 250));
//}
//
//void Pintu(Mat img) {
//	rectangle(img, Point(282, 282), Point(348, 380), Scalar(90, 90, 90), FILLED);
//	line(img, Point(300, 331), Point(300, 331), Scalar(250,250,250),10);
//}
//
//void Jendela(Mat img) {
//	rectangle(img, Point(415, 295), Point(460, 335), Scalar(90, 90, 90), 5);
//	line(img, Point(420, 315), Point(455, 315), Scalar(250, 250, 250), 2);
//	line(img, Point(437.4, 300), Point(437.5, 330), Scalar(250, 250, 250), 2);
//	rectangle(img, Point(470, 295), Point(515, 335), Scalar(90, 90, 90), 5);
//	line(img, Point(475, 315), Point(510, 315), Scalar(250, 250, 250), 2);
//	line(img, Point(492.5, 300), Point(492.5, 330), Scalar(250, 250, 250), 2);
//}
//
//void Nama(Mat img) {
//	putText(img, String("RUMAH JADUL"), Point(270, 100), FONT_HERSHEY_PLAIN, 2.3, Scalar(250, 250, 250), 4);
//}
//
//void Tambahan(Mat img) {
//	line(img, Point(347, 125), Point(412, 249), Scalar(250, 250, 250));
//	line(img, Point(379, 125), Point(444, 249), Scalar(250, 250, 250));
//	line(img, Point(411, 125), Point(476, 249), Scalar(250, 250, 250));
//	line(img, Point(443, 125), Point(508, 249), Scalar(250, 250, 250));
//	line(img, Point(330, 150), Point(490, 150), Scalar(250, 250, 250));
//	line(img, Point(345, 175), Point(505, 175), Scalar(250, 250, 250));
//	line(img, Point(355, 200), Point(520, 200), Scalar(250, 250, 250));
//	line(img, Point(370, 225), Point(535, 225), Scalar(250, 250, 250));
//	circle(img, Point(315, 200),15 ,Scalar(70, 70, 70), 2);
//}
