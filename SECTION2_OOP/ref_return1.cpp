struct Point
{
	int x;
	int y;
};

void f1(Point  p1) {} // call by value 
void f2(Point& p2) {} // call by reference

int main()
{
	Point pt = {1,2};

	f1(pt);
	f2(pt);
}