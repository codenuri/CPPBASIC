void f1(int* p)
{
	if ( p != 0 ) 
	{

	}
}
void f2(int& r)
{
	
}

int main()
{
	int* p = 0; // 널포인터는 있다.
	int& r;     // error. 널 참조는 없다.
//	int& r = n;
}