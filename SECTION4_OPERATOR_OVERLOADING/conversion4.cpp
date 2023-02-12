void foo(bool b) {}

int main()
{
	if ( nullptr ) {}

//	bool b1 = nullptr;	// error
//	foo(nullptr);		// error
//	nullptr << 10;		// error

	bool b2(nullptr);	
	bool b3 = static_cast<bool>(nullptr);	
}
