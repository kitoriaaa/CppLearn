#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int main(int argc, char const* argv[])
{
    std::vector<int> x = { 0, 1, 2, 3, 4 };

    // for (auto i = x.begin(); i != x.end(); ++i)
    //     std::cout << *i << std::endl;

    auto div = 3;
    auto n = std::count_if(x.begin(), x.end(), [div](const int v) {
        if (v <= 0)
            return false;
        if (v % div != 0)
            return false;
        return true;
    });

    std::cout << n << std::endl;

    std::map<std::string, int> persons = {
        { "Alice", 20 },
        { "Bob", 22 },
    };

    for (auto it = persons.begin(); it != persons.end(); ++it) {
        const auto& person = *it;
        const std::string& name = person.first;
        const int age = person.second;
        std::cout << name << ": " << age << std::endl;
    }

    return 0;
}
