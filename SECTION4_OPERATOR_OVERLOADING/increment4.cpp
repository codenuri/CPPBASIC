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
		//++x; ++y;	
		++(*this); // this->operator++()
		return temp;
	}
};


int main()
{
	int n = 3;
	++n;
	n++;

}
