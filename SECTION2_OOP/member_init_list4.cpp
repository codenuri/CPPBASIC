#include <iostream>

class Point
{
public:
//	int x;
	int y;
	int x;

	Point() : y{10}, x{y}
	{
	}
};

int main()
{
	Point pt;

	std::cout << pt.x << std::endl;
	std::cout << pt.y << std::endl;
}
