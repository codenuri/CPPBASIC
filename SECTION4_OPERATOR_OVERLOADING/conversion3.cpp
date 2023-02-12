class TcpConnect
{
	int state{0};
public:
	void connect() { } 	
	
	explicit operator bool() const { return state != 0; }	
};

void foo(bool b) {}

int main()
{
	TcpConnect tcp;

//	bool b1 = tcp;	// error
	bool b2(tcp);	// ok

	bool b3 = static_cast<bool>(tcp); // ok

//	foo(tcp);	// error

//	tcp << 10;	// error

	if ( tcp ) {}	// ok	
}


