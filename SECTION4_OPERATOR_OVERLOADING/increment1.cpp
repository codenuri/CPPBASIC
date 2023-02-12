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
	int n = 3;
	++n;

	Point p{1,1};
	++p; 	
				
}
