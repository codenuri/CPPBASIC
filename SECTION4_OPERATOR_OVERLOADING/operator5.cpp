class Point
{
	int x{0};
	int y{0};
public:
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}
};

int main()
{
	int n1 = 10;
	Point p1{1, 1};
	Point p2{2, 2};

	Point ret1 = p1 + p2; // p1.operator+(Point) 
	Point ret2 = p1 + n1; // p1.operator+(int) 
	Point ret3 = n1 + p1; // n1.operator+(Point)
						  // error. 
}
