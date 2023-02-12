class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x{x}, y{y}, w{w}, h{h} { } 

//	int getArea() { return w * h;} // 틀린 코드..
	int getArea() const { return w * h;}
};

//void foo(Rect r) // call by value : 복사본 오버헤드
void foo(const Rect& r)
{
	int area = r.getArea(); // ????
}

int main()
{
	Rect r(1,1,10,10);  // 상수객체 아님.

	int area = r.getArea(); // ok.

	foo(r);
}