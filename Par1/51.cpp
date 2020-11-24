// #include <stdio.h>
// using namespace std;

// int main()
// {
//     FILE *pFile;

//     pFile = fopen("test.txt", "w");
//     fputs("書き込みテスト", pFile);
//     fclose(pFile);

//     return 0;
// }


#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ofstream file("fruits.txt");
    std::vector<std::string> fruits = {"apple", "strawberry", "pear", "grape"};

    for (const auto fruits : fruits)
    {
        file << fruits << std::endl;
    }

    return 0;
}
