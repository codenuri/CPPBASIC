class Point
{
	int x{0};
	int y{0};
public:
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}

	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	Point pt{p1.x + p2.x, p1.y + p2.y};
	return pt;
}

int main()
{
	Point p1{1, 1};
	Point p2{2, 2};

	Point p3 = p1 + p2;	// operator+(p1, p2)
}
