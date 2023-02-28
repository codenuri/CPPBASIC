#include <print>

class Shape
{
public:
	virtual ~Shape() {}

//	virtual void draw() { std::println("draw Shape"); }
	virtual void draw() = 0;
};

class Rect : public Shape 
{
public:
	void draw() override { std::println("draw Rect"); }
};

int main()
{
	Rect r;
	r.draw();
}