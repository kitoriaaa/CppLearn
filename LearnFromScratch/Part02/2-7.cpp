#include <bitset>
#include <iostream>

int main()
{
    auto bits_a = std::bitset<8>("00001111");
    std::cout << ~bits_a << std::endl;
    std::cout << (bits_a << 2) << std::endl;
    std::cout << (bits_a >> 2) << std::endl;

    auto bits_b = std::bitset<8>("00111100");
    std::cout << (bits_a & bits_b) << std::endl;
    std::cout << (bits_a | bits_b) << std::endl;
    std::cout << (bits_a ^ bits_b) << std::endl;

    unsigned int a = 0x0000000f;
    std::cout << std::showbase << std::hex;
    std::cout << ~a << std::endl;
    std::cout << (a << 2) << std::endl;
    std::cout << (a >> 2) << std::endl;

    unsigned int b = 0x0000003c;
    std::cout << (a & b) << std::endl;
    std::cout << (a | b) << std::endl;
    std::cout << (a ^ b) << std::endl;

    return 0;
}