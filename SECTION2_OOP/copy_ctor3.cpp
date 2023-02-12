class Point
{
	int x{0};
	int y{0};
public:
	Point() {}
//	Point(const Point& p) : x{p.x}, y{p.y} {}
};

int main()
{
	Point p1;
	Point p2(p1);


	Point p3 = p1; // 

	Point p4;
	p4 = p1;
}