class TcpConnect
{
	int state{0};
public:
	void connect() 
	{
		// IP 와 port 번호를 받아서 
		// 서버에 접속하는 코드.
	} 
};

int main()
{
	TcpConnect tcp;
	tcp.connect();

//	if ( tcp.is_connected() )
	if ( tcp )
	{
	}
}