int Add1(int a, int b)
{
	return a + b;
}

inline int Add2(int a, int b)
{
	return a + b;
}

int main()
{
	int ret1 = Add1(1, 2);
	int ret2 = Add2(1, 2);
}