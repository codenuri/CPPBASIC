class Animal
{
protected:
    Animal() {}
};

class Dog : public Animal
{
public:
    Dog() : Animal() {} 
};

int main()
{
    // 다음중 에러를 모두 고르세요
    //Animal a;   // error
    Dog    d;   // ok
}

