#include <iostream>
#include <array>

// template <class T, std::size_t N>
// constexpr std::size_t size(const T (&)[N]) noexcept { return N; }

void PrintArray(const int* x, std::size_t num)
{
    for (std::size_t i = 0; i < num; ++i)
    {
        std::cout << x[i] << std::endl;
    }
}

void PrintArray1(const int* x)
{
    static_assert(sizeof(x)==sizeof(int*), "");
    for (int i = 0; i < 5; ++i)
    {
        std::cout << x[i] << std::endl;
    }
}

void PrintArray2(const int* x)
{
    for (int i = 0; i < 5; ++i)
    {
        std::cout << x[i] << std::endl;
    }
}


int main()
{
    // int x[] = {2, 4, 6 ,8, 10};
    // int *p = x;
    // // std::cout << *p << std::endl;
    // // std::cout << *(p+1) << std::endl;
    // // std::cout << *(p+2) << std::endl;
    // // std::cout << *(p+3) << std::endl;
    // // std::cout << *(p+4) << std::endl;

    // PrintArray1(x);
    // PrintArray1(x);

    // constexpr std::size_t num = 5;
    // int x1[num] = {0, 1, 2, 3, 4};

    // PrintArray(x1, num);

    // std::cout << size(x1) << std::endl;

    std::array<int, 5> x = {10, 20, 30, 40, 50};
    std::cout << x.size() << std::endl;
    return 0;
}