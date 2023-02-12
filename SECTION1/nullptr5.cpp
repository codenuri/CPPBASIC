int main()
{
	int*    p1 = nullptr; // ok
	double* p2 = nullptr; // ok

	int n1 = nullptr;	// error
	int n2{nullptr};	// error

	bool b1 = nullptr;	// error
	bool b2{nullptr};	// ok

	if ( nullptr ) {}	// ok
}
