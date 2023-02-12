int gcd(int a, int b)
{
	return b != 0 ? gcd(b, a % b) : a;
}

//double gcd(double a, double b); // 구현이 없다. 선언만

double gcd(double a, double b) = delete; // C++, 함수 삭제

int main()
{
	gcd(10, 4);

	gcd(3.3, 4.4);
}