#include <iostream>

class Point
{
	int x{0};
	int y{0};
public:
	void set(int a, int b)
	{
		x = a;
		y = b;	

		std::cout << this << std::endl;			
	}
//	static void foo() {}
};

int main()
{
	Point pt1;
	Point pt2;

	std::cout << &pt1 << std::endl;	
	std::cout << &pt2 << std::endl;	

	pt1.set(10, 20);
	pt2.set(10, 20);
//	set(&pt1, 10, 20); // error
}