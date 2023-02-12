#include <iostream>

namespace Graphics
{
	class Point
	{
		int x{0};
		int y{0};
	public:
		Point(int x, int y) : x{x}, y{y} {}	

		friend std::ostream& operator<<( std::ostream& os, const Point& pt);
	};

	std::ostream& operator<<( std::ostream& os, const Point& pt)
	{
		return os << pt.x << ", " << pt.y;
	}
}

int main()
{
	Graphics::Point p{1, 2};
	std::cout << p;  // operator<<(cout, p)
}
