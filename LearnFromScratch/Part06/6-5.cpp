#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> x = std::make_shared<int>(100);

    {
        std::shared_ptr<int> y = x;

        std::cout << *y << std::endl;
    }

    std::cout << *x << std::endl;

    return 0;
}