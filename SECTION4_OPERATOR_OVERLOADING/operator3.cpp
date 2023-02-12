class Point
{
	int x{0};
	int y{0};
public:
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}

	Point operator+(const Point& p) const
	{
		Point pt{p.x + x, p.y + y};
		return pt;
	}
};

int main()
{
	const Point p1{1, 1};
	Point p2{2, 2};

	Point p3 = p1 + p2;	// p1.operator+(p2)
}
