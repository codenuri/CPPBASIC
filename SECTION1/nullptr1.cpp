int main()
{
	int  n1 = 0;
	int* p1 = 0; 	// ok

	int* p2 = 10; 	// error
	int* p3 = n1; 	// error


	int* p4 = nullptr;    	// ok
	void(*p5)() = nullptr;	// ok

	int  n2 = nullptr; // error
}
