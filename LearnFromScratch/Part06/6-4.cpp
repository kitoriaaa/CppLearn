#include <iostream>
#include <string>

void Print(std::string&)
{
    std::cout << "左辺値参照" << std::endl;
}

void Print(std::string&&)
{
    std::cout << "右辺値参照" << std::endl;
}

int main()
{
    std::string str = "hoge";

    Print(str);
    Print(std::move(str));

    std::string s = str;

    // std::cout << s << std::endl;
    // str = "fuga";
    // std::cout << str << " " << s << std::endl;

    s = std::move(str);
    // std::cout << str << " " << s << std::endl;
    std::cout << s << std::endl;
    s = "fuga";

    // std::cout << str << " " << s << std::endl;

    return 0;
}