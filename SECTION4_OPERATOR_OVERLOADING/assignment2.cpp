#include <print>

class Point
{
public:
	int x{0};
	int y{0};
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}	

	Point& operator=(const Point& other) 
	{
		if (&other == this) return *this;
		
		x = other.x;
		y = other.y;

		return *this;
	}
};

int main()
{
	Point p1{1,2};
	Point p2;

	p2 = p1;	// p2.operator=(p1)
	(p2 = p1) = p1;

	p2 = p2;

	std::println("{}, {}", p2.x, p2.y);

	int n = 0;

	(n = 10) = 20;

}