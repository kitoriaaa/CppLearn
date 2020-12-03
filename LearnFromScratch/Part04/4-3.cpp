#include <iostream>

namespace A {
int count = 2;

namespace P {
    int count = 5;

    int GetCount()
    {
        return count;
    }
} // namespace P

} // namespace A

namespace B {
int count = 4;
} // namespace B

int main()
{
    std::cout << A::count << std::endl;
    std::cout << B::count << std::endl;
    std::cout << A::P::GetCount() << std::endl;

    return 0;
}