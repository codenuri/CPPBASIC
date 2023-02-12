class Buffer
{
	char* pBuf;
	std::size_t  size;
public:
	Buffer(std::size_t sz) : size(sz)
	{
		pBuf = new char[size];
	}
	~Buffer() { delete[] pBuf;}
};

int main()
{
	Buffer b1(1024);
	Buffer b2 = b1;
}