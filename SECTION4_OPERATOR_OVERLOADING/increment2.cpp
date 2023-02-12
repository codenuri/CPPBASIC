#include <print>

class Point
{
public:
	int x{0};
	int y{0};
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}	

	Point operator++()
	{
		std::println("prefix ++");
		++x; ++y;	
		return *this;
	}

	Point operator++(int)
	{
		std::println("postfix ++");

		Point temp = *this;
		++x; ++y;	
		return temp;
	}
};

int main()
{
	Point p{1,1};
	Point temp1 = ++p;	// p.operator++()
	Point temp2 = p++;	// p.operator++(int)
	
}
