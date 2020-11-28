#include <iostream>

void Func();

int main()
{
    extern int a;
    std::cout << &a << std::endl;
    Func();
    a = 5;
    std::cout << &a << std::endl;
    Func();

    return 0;
}