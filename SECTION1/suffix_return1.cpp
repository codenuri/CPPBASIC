int add1(int a, int b)
{
	return a + b;
}

auto add2(int a, int b) -> int
{
	return a + b;
}

int main()
{
	int ret1 = add1(1,2);
	int ret2 = add2(1,2);
}