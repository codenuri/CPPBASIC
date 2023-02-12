// ❶ 인자가 모두 primitive 타입인 경우는 overloading 할수 없다.
//    인자 중에 한개는 반드시 사용자 정의 타입 이어야 한다.
int operator+(int a, int b)	// error
{
	return a - b;
}
int ret = 3 + 2; // 1 ???



// ❷ 인자의 갯수를 변경할수 없다. 
//    operator+ 를 멤버 함수 : 1개
//           멤버가 아닌 함수 : 2개
void operator+(Point p1, Point p2, Point p2) // error
{
}


// ❸ 디폴트 파라미터를 사용할수 없다.
void operator+(Point a, int n = 0)	// error
{
}


// ❹ 새로운 연산자를 만들수 없다.
void operator+*(Point a, Point b)	// error
{	
}


// ❺ [], (), ->, = 연산자는 멤버 함수로만 만들수 있다.
void operator[](int idx)	// error
{
}


// ❼ 아래 연산자는 재정의 할수 없다.
.   .*   ::   ?:  sizeof  typeid  
static_cast  dynamic_cast  reinterpret_cast   const_cast



// ❽ 연산자 재정의에서 중요한 연산자들 : ++, [], (), ->, =


// ❽ 멤버 함수로 구현시 상수 멤버 함수로 할지 