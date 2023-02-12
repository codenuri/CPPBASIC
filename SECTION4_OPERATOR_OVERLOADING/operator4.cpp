// 멤버 함수와 멤버가 아닌 함수를 모두 제공하는 경우
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

	Point p3 = p1 + p2;	
}
