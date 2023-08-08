#include <iostream>
#include <typeinfo>

int main()
{
    int  n1 = 10;
    auto n2 = n1; // n2의 타입은 ? int 
    
    const std::type_info& t1 = typeid(n2);
    
    std::cout << t1.name() << std::endl;
}
