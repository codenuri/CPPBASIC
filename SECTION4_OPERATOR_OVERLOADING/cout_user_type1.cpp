#include <iostream>

class Point
{
	int x{0};
	int y{0};
public:
	Point(int x, int y) : x{x}, y{y} {}	

	friend std::ostream& operator<<( std::ostream& os, const Point& pt);
};

std::ostream& operator<<( std::ostream& os, 
						  const Point& pt)
{
	return os << pt.x << ", " << pt.y;
}


int main()
{
	Point p{1, 2};
	std::cout << p; 	// cout.operator<<(Point) 처럼 멤버로 추가는 안됨
						// operator<<(cout, p)

	std::cout << 1;		// cout.operator<<(int)	
	std::cout << 3.4;   // cout.operator<<(double)
}
