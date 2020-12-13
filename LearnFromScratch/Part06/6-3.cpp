#include <iostream>

void ChangeToFifty1(int v)
{
    v = 50;
}

void ChangeToFifty2(int* v)
{
    *v = 50;
}

int main()
{
    int a = 100;
    ChangeToFifty1(a);
    std::cout << a << std::endl;

    int b = 100;
    ChangeToFifty2(&b);
    std::cout << b << std::endl;

    return 0;
}