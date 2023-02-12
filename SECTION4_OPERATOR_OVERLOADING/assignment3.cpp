class Point
{
public:
	int x{0};
	int y{0};
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}	

	Point& operator=(const Point&) = delete;
};

int main()
{
	Point p1{1,2};
	Point p2;
	p2 = p1;
}