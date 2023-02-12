int main()
{
	int n1 = 3.4;   // ok

	int n2{3.4};	// error
	int n3 = {3.4};	// error

	char c{500};	// error
}