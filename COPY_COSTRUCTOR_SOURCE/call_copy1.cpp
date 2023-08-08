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
    explicit Point( const Point& p) : x(p.x), y(p.y)
    {
        std::cout << "copy ctor" << std::endl;
    }
};

int main()
{
    Point p1(1,2);
    Point p2{p1};    
    Point p3{p1};    
    Point p4 = {p1};    
    Point p5 = p1;    
}


