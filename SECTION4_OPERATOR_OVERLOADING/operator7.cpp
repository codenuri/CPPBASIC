class Point
{
	int x{0};
	int y{0};
public:
	Point() = default;
	Point(int x, int y) : x{x}, y{y} {}

	// p1 이 상수 객체라도 "p1 + p2" 할수 있어야 한다. 상수 멤버 함수로 작성
	Point operator+(const Point& p) const
	{
		Point pt{p.x + x, p.y + y};
		return pt;
	}

	// p1 이 상수 객체라면 "p1 += p2" 는 할 수 없다. "비 상수" 멤버 함수로 작성.
	Point& operator+=(const Point& p)
	{	
		x += p.x;
		y += p.x;
		return *this;
	}
};

int main()
{
	const Point p1{1, 1};
	Point p2{2, 2};


	auto ret = p1 + p2; // ok
						// p1.operator+(p2)

	p1 += p2;	// p1이 수정되어야 함.
				// error. 나와야 함
				// p1.operator+=(p2)
}
