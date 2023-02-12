class Object
{
	int idata;
	static int sdata;
public:
	void ifunc()
	{
		idata = 10;	// 1. ok
		sdata = 10;	// 2. ok
		sfunc();	// 3. ok
	}
	static void sfunc()
	{
		idata = 10;	// 4. error
		sdata = 10;	// 5. ok
		ifunc();	// 6. error
	}
};
int Object::sdata{0};

int main()
{
	Object::sfunc();

	Object obj;
	obj.ifunc();
}