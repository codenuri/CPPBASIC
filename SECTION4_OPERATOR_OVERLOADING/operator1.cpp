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
	Point p1{1, 1};
	Point p2{2, 2};

	int   n1 = 10 + 20;	// ok
	Point p3 = p1 + p2;	// ?
}
