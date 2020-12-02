#include <iostream>
#include <tuple>
#include <utility>

int main()
{
    std::pair<std::string, int> person { "Bob", 20 };

    std::cout << person.first << " " << person.second << std::endl;
    std::string name;
    int age;

    std::tie(name, age) = person;
    std::cout << name << " " << age << std::endl;

    return 0;
}