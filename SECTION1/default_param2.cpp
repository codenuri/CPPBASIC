
void f1(int a = 0, int b = 0, int c = 0 ) {} // ok
void f2(int a,     int b = 0, int c = 0 ) {} // ok
//void f3(int a = 0, int b,     int c = 0 ) {} // error
//void f4(int a = 0, int b = 0, int c )     {} // error


void foo(int a, int b = 0, int c = 0);

int main()
{
	foo(1); 
}

//void foo(int a, int b  , int c )
void foo(int a, int b /* = 0 */ , int c /* = 0 */ )
{	
}
