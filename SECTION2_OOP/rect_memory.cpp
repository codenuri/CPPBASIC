#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() {	return (right - left) * (bottom - top);	}
	void draw()   {	std::cout << "Draw Rect" << std::endl;	}
};

int main()
{
	Rect rc1 = {1, 1, 5, 5};
	Rect rc2 = {3, 3, 8, 8};
	Rect rc3 = {3, 3, 8, 8};

	std::cout << sizeof(rc1) << std::endl;

	rc1.draw(); 
	rc2.draw();
}