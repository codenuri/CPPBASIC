void f1(int    a){}
void f1(double a){} // ok

void f2(int a) {}
void f2(int a, int b) {} // ok

// f3은 아래처럼 만들수가 없다.
//void f3(int a) {}
//char f3(int a) { return 0;}

void f4(int a) {}
void f4(int a, int b = 0) {}

void f5(char  a) {}
void f5(short a) {}

int main()
{
	f1(3);
	f1(3.3);

	f2(1);
	f2(1, 2);

	f4(1, 2);
//	f4(1);   // ambiguos error

	f5('a'); // ok
	f5(1);
}


