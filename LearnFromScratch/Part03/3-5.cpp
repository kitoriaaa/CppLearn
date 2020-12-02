#include <iostream>
#include <vector>

int main(int argc, char const* argv[])
{
    std::vector<int> x = { 0, 1, 2, 3, 4 };
    x[2] = 10;

    auto size = x.size();

    std::cout << size << std::endl;

    x.emplace_back(100);
    std::cout << x.size() << std::endl;

    x.pop_back();
    std::cout << x.size() << std::endl;

    auto px = x.data();
    auto num = *px + 1;
    std::cout << num << std::endl;
    return 0;
}
