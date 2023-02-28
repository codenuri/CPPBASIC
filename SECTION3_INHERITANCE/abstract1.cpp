class Shape
{
public:
	virtual ~Shape() {}	

	virtual void draw() = 0;
};

int main()
{
//	Shape  s;	// error	
	Shape* p;	// ok
}
