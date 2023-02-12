void inc1(int  n) { ++n;}
void inc2(int* p) { ++(*p);}
void inc3(int& r) { ++r;}

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a);
	inc2(&b);
	inc3(c);

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl; // 11
	std::cout << c << std::endl; // 11
}