class TcpConnect
{
	int state{0};
public:
	void connect() { } 

	operator bool() const 
	{
		return state != 0;
	}	
};

int main()
{
	TcpConnect tcp;
	tcp.connect();

	if ( tcp ) // tcp.operator bool()
	{
	}
}