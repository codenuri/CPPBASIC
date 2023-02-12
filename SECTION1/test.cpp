namespace Foo {
    namespace Bar {
        class X;
    }
}

using namespace Foo;
int main(void)
{
    ::Bar::X x;
}