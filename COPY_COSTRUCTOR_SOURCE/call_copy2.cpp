#include <iostream>

class Point
{
public:
    int x;
    int y;

    Point(int a = 0, int b = 0) : x(a), y(b) 
    {
        std::cout << "ctor" << std::endl;
    }
    Point( const Point& p)      : x(p.y), y(p.x)
    {
        std::cout << "copy ctor" << std::endl;
    }
};

//void foo( Point pt) // Point pt = p1
void foo( const Point& pt) // const Point& pt = p1
{
}

int main()
{
    Point p1(1,2);
    foo(p1);
}


