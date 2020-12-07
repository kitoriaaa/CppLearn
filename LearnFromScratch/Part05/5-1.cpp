#include <iostream>

int main(int argc, char const* argv[])
{
    int x = 0;

    std::cout << "整数を入力してください: " << std::endl;
    if (std::cin >> x) {
        std::cout << "入力した値は " << x << "です．" << std::endl;
    } else {
        std::cout << "不正な入力です" << std::endl;
    }

    return 0;
}
