#include <iostream>
#include <map>
#include <unordered_map>

int main(int argc, char const* argv[])
{
    std::map<std::string, int> persons = {
        { "Alice", 12 },
        { "Bob", 23 },
    };

    std::unordered_map<std::string, int> person_unorderd = {
        { "Alice", 20 },
        { "Bob", 30 },
    };
    persons.insert({ "Eve", 19 });
    persons.erase("Bob");
    std::cout << persons["Eve"] << std::endl;

    return 0;
}
