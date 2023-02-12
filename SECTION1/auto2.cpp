int main()
{
	int x[5] = {1, 2, 3, 4, 5};

	auto a = x;

	decltype(x) d;
	decltype(x) d1 = x; // error
}