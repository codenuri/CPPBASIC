#include <type_traits>

class Object
{
public:
//	explicit(false) Object(int a) {} 

	template<typename T>
	explicit( std::is_integral_v<T> ) Object( T arg ) {}
};

int main()
{
	Object o1(10);
//	Object o2 = 10;
	Object o2 = 3.4;
}