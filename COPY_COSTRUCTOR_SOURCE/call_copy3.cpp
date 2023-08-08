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


Point p; // 생성자

//Point foo()  // 값 타입 반환

Point& foo()
{
//    Point p; // 생성자
    return p;
}

int main()
{
    foo();
    
}








