#include <iostream>

int g = 0;

class Point
{
public:
//	int x{0}; // int x = 0;
	int x{++g};
	int y{0};

	Point() {}
	Point(int a)        : x{a} {}
	Point(int a, int b) : x{a}, y{b} {}
};

int main()
{
	Point pt1;     // 0, 0
	Point pt2(1);  // 1, 0

	std::cout << pt1.x << ", " << pt1.y << std::endl;
	std::cout << pt2.x << ", " << pt2.y << std::endl;

	std::cout << g << std::endl; // 1
}