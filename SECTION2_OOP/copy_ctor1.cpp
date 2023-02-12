class Point
{
	int x;
	int y;
public:
	Point()             : x{0}, y{0} {} // 1
	Point(int a, int b) : x{a}, y{b} {} // 2
};

int main()
{
	Point p1;		// ok.
	Point p2(1,2);	// ok
//	Point p3(1);	// error. Point(int) 필요
	Point p4(p2); 	// ok.    Point(Point)
}