#include <iostream>

class Point
{
public:
    int x;
    int y;

    Point()             : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
    
    // 사용자가 만드는 복사 생성자
    Point( const Point& p) : x(p.y), y(p.x)
    {
        std::cout << "copy ctor" << std::endl;
    }
};

int main()
{
    Point p1;       // ok
    Point p2(1,2);  // ok
    //Point p3(1);    // Point( int ) - error
    Point p4(p2);   // Point( Point ) - ok. 
    
    std::cout << p4.x << std::endl; // 2
    std::cout << p4.y << std::endl; // 1
    
}













/*
Point(const Point& p) : x(p.x), y(p.y)
{
}
*/