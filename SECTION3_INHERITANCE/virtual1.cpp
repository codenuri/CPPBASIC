#include <iostream>

class Shape
{
public:
    void Draw() { std::cout << "Shape::Draw" << std::endl; }
};

class Rect : public Shape
{
public:
    void Draw() { std::cout << "Rect::Draw" << std::endl; }
};

int main()
{
    Shape s; s.Draw(); // Shape::Draw
    Rect r;  r.Draw(); // Rect::Draw
    
    Shape* p = &r;     //
    p->Draw();         // Shape::Draw
}