#include <iostream>

class Shape
{
public:
    virtual void Draw() { std::cout << "Shape::Draw" << std::endl; }
};
class Rect : public Shape
{
public:
    virtual void Draw() { std::cout << "Rect::Draw" << std::endl; }
};

int main()
{
    Shape s; 
    Rect r;  
    
    Shape* p = &r;
    
    //--------------
    //int n = 0;
    //std::cin >> n;
    //if ( n == 1 ) p = &s;
    //--------------
    
    // 아래 코드를 컴파일 할때
    // p가 어느객체를 가리킬지 컴파일러가 알수 있을까 ?
    
    p->Draw();    // Rect::Draw
}

















