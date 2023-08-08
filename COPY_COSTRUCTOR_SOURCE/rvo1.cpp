#include <iostream>

class Point
{
public:
    int x;
    int y;
    
    Point(int a, int b) : x(a), y(b) 
    {
        std::cout << "ctor" << std::endl;
    }    
    Point( const Point& p) : x(p.x), y(p.y)
    {
        std::cout << "copy ctor" << std::endl;
    }
};

Point foo()
{
//    Point p(1,2);
//    return p;
    return Point(1,2);
}

int main()
{
    foo();
}


