int global{0};

class Object
{
	int idata{0};
	static int sdata;
public:
	void ifunc()        {}
	static void sfunc() {}
};
int Object::sdata{0};


void gfunc() {}

int main()
{
	gfunc();
	Object::sfunc();

	Object obj;
	obj.ifunc();
}