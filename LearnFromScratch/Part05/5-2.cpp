#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// int main()
// {
//     std::ifstream file("LearnFromScratch/Part05/file.txt"); // 読み込むファイルのパスを指定
//     std::string line;

//     while (std::getline(file, line)) { // 1行ずつ読み込む
//         std::cout << line << std::endl;
//     }

//     return 0;
// }

int main()
{
    std::ofstream file("test.txt", std::ios::app);
    std::vector<std::string> fruits = { "apple", "strawberry", "pear", "grape" };

    for (const auto fruit : fruits) {
        file << fruit << std::endl;
    }

    return 0;
}