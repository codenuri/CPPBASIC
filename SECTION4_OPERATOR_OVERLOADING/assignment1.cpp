#include <print>
class Point
{
public:
	int x{0};
	int y{0};
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}	
};

int main()
{
	Point p1{1,2};
	Point p2;

	Point p3 = p1;
	
	p2 = p1;

	std::println("{}, {}", p2.x, p2.y);
}