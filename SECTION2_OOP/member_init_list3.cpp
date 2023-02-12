class Point
{
	int x;
	int y;
public:
	Point(int a, int b) : x{a}, y{b}
	{
	}
};

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect(int x1, int y1, int x2, int y2)
		: leftTop{x1, y1}, rightBottom(x2, y2)
	{
	//	leftTop(x1, y1);
	}
};

int main()
{
	Rect r(1,1,10,10);
}