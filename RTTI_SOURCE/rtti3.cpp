#include <iostream>
#include <typeinfo>

int main()
{
    auto n1 = 10;
    
    const std::type_info& t1 = typeid(n1);
    const std::type_info& t2 = typeid(int);
    
    if ( t1 == t2 )
    {
        std::cout << "same" << std::endl;
    }
    
    if ( t1.hash_code() == t2.hash_code() )
    {
        std::cout << "same" << std::endl;
    }
    
    std::cout << t1.name() << std::endl;
}
