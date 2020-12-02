#include <iostream>
#include <vector>

int main()
{
    std::vector<int> x = { 0, 1, 2, 3, 4 };

    for (auto it = x.begin(); it != x.end(); ++it) {
        std::cout << *it << std::endl;
    }

    int y[] = { 5, 6, 7, 8, 9, 10 };
    for (auto&& e : y) {
        std::cout << e << std::endl;
    }
    return 0;
}