#include <print>

class Point
{
public:
	int x{0};
	int y{0};
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}	

	Point& operator++()
	{
		++x; ++y;	
		return *this;
	}
	Point operator++(int)
	{
		Point temp = *this;
		++x; ++y;	
		return temp;
	}
};
int main()
{
	Point p{1,1};

	++++p; // ++(++p) (p.operator++()).operator++()

	std::println("{}, {}", p.x, p.y);
}
