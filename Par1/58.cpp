// #include <iostream>

// #define ELEM(array)     (sizeof (array) / sizeof *(array))

// using namespace std;

// struct SStudent
// {
//     char szName[16];
//     int nJapanese;
//     int nMath;
//     int nEnglish;
// };

// void Disp(const SStudent &student)
// {
//     cout << "名前： " << student.szName << endl
//          << "  国語： " << student.nJapanese << "点，"
//             "数学： " << student.nMath << "点，"
//             "英語： " << student.nEnglish << "点" << endl;
// }

// int main()
// {
//     SStudent students[] = {
//         {"赤井隆", 73, 98, 86},
//         {"葛西大輔", 64, 45, 40},
//         {"吉田叶", 76, 78, 69},
//     };

//     int i;

//     for (i = 0; i < ELEM(students); i++)
//         Disp(students[i]);
    
//     return 0;
// }

#include <iostream>
#define ELEM(array)     (sizeof (array) / sizeof *(array))

using namespace std;

struct SStudent
{
    char szName[16];
    int nJapanese;
    int nMath;
    int nEnglish;
};


void Disp(const SStudent *pstudent)
{
    cout << "名前： " << pstudent->szName << endl
         << "　国語： " << pstudent->nJapanese << "点，"
         << "数学： " << pstudent->nMath << "点，"
         << "英語： " << pstudent->nEnglish << "点" << endl;
}


int main()
{
    SStudent students[] = {
        {"赤井隆", 73, 98, 86},
        {"葛西大輔", 64, 45, 40},
        {"吉田叶", 76, 78, 69},
    };

    int i;

    for (i = 0; i < ELEM(students); i++)
        Disp(&students[i]);
    
    return 0;
}