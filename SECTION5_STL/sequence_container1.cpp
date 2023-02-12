#include <vector>		
#include <list>			
#include <deque>		
#include <forward_list> 
#include <array>

int main()
{
	// 1. 선형 컨테이너(sequence container)의 메모리 구조
	std::vector v = {1, 2, 3, 4, 5};
	std::list   s = {1, 2, 3, 4, 5};
	std::deque  d = {1, 2, 3, 4, 5};

	// 2. 대부분의 멤버 함수는 이름(사용법)이 동일 합니다.
	v.push_back(2);
	s.push_back(2);
	d.push_back(2);

	// 3. 사용법이 다른 경우가 있다면 의도적인 설계 입니다.
//	v.push_front(3);	// error. vector는 전방 삽입 안됨
	s.push_front(3);
	d.push_front(3);

	v[4] = 5;
//	s[4] = 5;	// error. list 는 배열 연산 안됨.
	d[4] = 5;

	// 4. 사용법이 유사하므로 컨테이너를 변경해도 대부분의 코드는 수정 없이 사용가능
//	std::vector c = {1,2,3,4};
	std::list c = {1,2,3,4};

	c.push_back(10);
	c.pop_back();
}
