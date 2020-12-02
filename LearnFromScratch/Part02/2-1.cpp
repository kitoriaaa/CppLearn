#include <cstdint>
#include <iostream>

// enum Day
// {
//     Sun,
//     Mon,
//     Tue,
//     Wed,
//     Thu,
//     Fri,
//     Sat,
// };

// enum class cDay
// {
//     Sun,
//     Mon,
//     Tue,
//     Wed,
//     Thu,
//     Fri,
//     Sat,
// };

int main()
{
    auto x = 5;
    int* p = &x;
    int& r = x;

    std::cout << *p << std::endl;
    std::cout << r << std::endl;

    return 0;
}