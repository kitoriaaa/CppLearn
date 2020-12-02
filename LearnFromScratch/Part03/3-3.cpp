#include <iostream>
#include <string>
#include <tuple>

int main()
{
    std::tuple<std::string, int> person { "Bob", 20 };

    std::cout << std::get<0>(person) << " " << std::get<1>(person) << std::endl;

    std::tuple<std::string, int, std::string> person2 { "Bob", 20, "USA" };
    std::string name;
    int age;
    std::string country;
    std::tie(name, age, country) = person2;

    return 0;
}