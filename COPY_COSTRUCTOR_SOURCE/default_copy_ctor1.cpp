#include <iostream>

class Point
{
public:
    int x;
    int y;
    
    Point(int a, int b) : x(a), y(b) { }    
};

int main()
{
    Point p1(1,2); // ok
    Point p2(p1);
    
    std::cout << p2.x << std::endl; // 1
    std::cout << p2.y << std::endl; // 2
}


