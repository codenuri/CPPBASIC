#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int getRectArea(const Rect& r)
{
	return (r.right - r.left) * (r.bottom - r.top);
}

void drawRect(const Rect& Rect r)
{
	std::cout << "Draw Rect" << std::endl;
}

int main()
{
	Rect rc = {1, 1, 10, 10};

	int n = getRectArea(rc);

	drawRect(rc);
}