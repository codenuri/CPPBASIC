#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x{a}, y{b} {} 

	Point(const Point& p) : x{p.x}, y{p.y}
	{
		std::cout << "copy ctor" << std::endl;
	}
//	Point foo() { return *this; }
	Point& foo() { return *this; }
};

//void f1(Point pt) {} // Point pt = p1
void f1(const Point& pt) {}

int main()
{
	Point p1(1, 2);

	p1.foo();

//	f1(p1);

//	Point p2(p1);
//	Point p3 = p1;
//	Point p4{p1};
//	Point p5 = {p1};
}