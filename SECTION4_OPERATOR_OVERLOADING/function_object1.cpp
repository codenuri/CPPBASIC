template<typename T>
struct Plus
{
	T operator()(const T& a, const T& b) const 
	{
		return a + b;
	}
};

int main()
{
	Plus<int> p;		// p 는 함수가 아니라 객체.

	int n1 = p(1, 2);	// 객체 p를 함수 처럼 사용
						// p.operator()(1, 2)

	int n2 = p.operator()(1, 2);
}