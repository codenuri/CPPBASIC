class Object
{
	const int c;
	int& r;
public:
	Object( int n, int& x) : c{n}, r{x}
	{
//		c = n;
//		r = x;
	}
};

int main()
{
	int num = 10;

	Object obj(10, num);
}
