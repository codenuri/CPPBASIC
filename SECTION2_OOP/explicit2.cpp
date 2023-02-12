class Vector
{
public:
	explicit Vector(int size){}
};
void foo(Vector v)
{
}
int main()
{
	Vector v1(10);   // ok
	Vector v2 = 10;  // error
	Vector v3{10};   // ok
	Vector v4 = {10};// error 

	v1 = 20; 	// error

	foo(v1); // ok
	foo(10); // error
}

