int main()
{
	const int c = 10;

	int* p1 = static_cast<int*>(&c); // error
	int* p2 = reinterpret_cast<int*>(&c); // error
	int* p3 = const_cast<int*>(&c); // ok

//	*p3 = 20;
}