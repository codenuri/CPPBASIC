#include <iostream>
#include <vector>
using namespace std;

class Shape
{
    
};
    
class Rect : public Shape
{
public:
    void Draw() { cout << "Rect::Draw" << endl;}    
};

class Circle : public Shape
{
public:
    void Draw() { cout << "Circle::Draw" << endl;}    
};

int main()
{
    vector<Shape*> v;
}






