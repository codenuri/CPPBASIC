#include <iostream>
#include <typeinfo>

int main()
{
    
    //std::type_info t2; // error
    
    auto n1 = 10;
    
    typeid(n1);
    typeid(int);
    const std::type_info& t = typeid(3 + 4.2);
    
    std::cout << t.name() << std::endl;
}
