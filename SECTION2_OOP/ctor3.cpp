#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() 			{ x = 0; y = 0; std::cout << "ctor1" << std::endl;}
	Point(int a, int b) { x = a; y = b; std::cout << "ctor2" << std::endl;}	
};
int main()
{
	Point p1;		// 1번
	Point p2(1,2);	// 2번
	Point p3{1,2};  // 2번,  C++11
	Point p4 = {1,2};// 2번, C++11

	Point arr1[5];	// 1번, 5회
	Point arr2[5] = { {1,2}, {1,1} };  // 2번 2회, 1번 3회

	Point* p; // 객체 생성 아님. 생성자 호출 안됨.

	p = static_cast<Point*>(malloc(sizeof(Point))); // 생성자 호출 안됨
	free(p);

	p = new Point;		// 1번
	delete p;

	p = new Point(1,2); // 2번
	delete p;
}