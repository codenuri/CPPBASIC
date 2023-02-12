#include <iostream>

struct Point
{
	int x;
	int y;

	Point(int a, int b)   : x{a},  y{b}   { std::cout << "Point(int, int)" << std::endl;}
	Point(const Point& p) : x{p.x},y{p.y} { std::cout << "Point(Point)"    << std::endl;}
	~Point()                              { std::cout << "~Point()" << std::endl; }
};
Point pt = {1, 2};

//Point f1()
Point& f1()
{
	return pt;

//	Point p = {1,1};
//	return p; // 절대 이렇게 하면 안됨.
}
int main()
{
	std::cout << "----------" << std::endl;
	f1();
	std::cout << "----------" << std::endl;
}