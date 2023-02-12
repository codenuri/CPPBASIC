#include <iostream>

template<class F, class T>
void call(F f, T arg)  // int arg = 0
{					   // std::nullptr_t arg = nullptr
	f(arg);
}

void foo(int  a) {}
void goo(int* p) {}

int main()
{
	foo(10); // ok
	goo(0);	 // ok

	call(foo, 10); 	// foo(10). ok
//	call(goo, 0);  	// goo(0)==> goo(arg)
					// error
	call(goo, nullptr); // ok
}