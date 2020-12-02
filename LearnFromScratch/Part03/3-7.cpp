#include <iostream>
#include <set>
#include <unordered_set>

int main(int argc, char const* argv[])
{
    std::set<std::string, int> persons = {
        "Alice",
        "Bob"
    };

    std::unordered_set<std::string, int> persons_unorderd = {
        "Alice",
        "Bob"
    };

    return 0;
}
