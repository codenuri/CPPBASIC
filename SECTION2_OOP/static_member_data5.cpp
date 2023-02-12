struct Object
{
//	static int data1 = 0; // error
	static int data2;     // ok

	static const int data3 = 0;     // ok
	static constexpr int data4 = 0; // ok
		
	inline static int data5 = 0;
};
int Object::data2 = 0;

int main()
{
}
