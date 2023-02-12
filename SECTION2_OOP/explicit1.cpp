class Vector
{
public:
	Vector(int size){}
};

int main()
{
	// C++98
	Vector v1(10);  
	Vector v2 = 10; 

	// C++11
	Vector v3{10};  
	Vector v4 = {10}; 

	v1 = 20; // v1 = Vector(20)
}

