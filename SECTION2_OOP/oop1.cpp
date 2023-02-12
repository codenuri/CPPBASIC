#include <iostream>

int getRectArea(int x1, int y1, int x2, int y2)
{
	return (x2 - x1) * (y2 - y1);
}

void drawRect(int x1, int y1, int x2, int y2)
{
	std::cout << "Draw Rect" << std::endl;
}

int main()
{
	int n = getRectArea(1, 1, 10, 10);

	drawRect(1, 1, 10, 10);
}