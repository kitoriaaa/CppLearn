#include <stdio.h>
using namespace std;


// int strlen(char *str)
// {
//     int i;
//     for (i = 0; str[i]; i++);
//     return i;
// }


// void DispLength(char *str)
// {
//     printf("文字列「%s」の長さは %d バイトです．\n", str, strlen(str));
// }

// int main()
// {
//     DispLength("ホメホメール");
//     DispLength("abcdefg");
//     DispLength("");
    
//     return 0;
// }

// ------------------------------------------------------------------------------------

// int strlen(char *str)
// {
//     char *p;
//     for (p = str; *p; p++);
//     return p - str;
// }

// void DispLength(char *str)
// {
//     printf("文字列「%s」の長さは %d バイトです．\n", str, strlen(str));
// }

// int main()
// {
//     DispLength("ほめ殺し");
//     DispLength("嘘つきは泥棒のはじまり");
//     DispLength("");

//     return 0;
// }

// ------------------------------------------------------------------------------------

int strlen(char *str)
{
    int i;
    for (i = 0; *(str + i); i++);
    return i;
}

void DispLength(char *str)
{
    printf("文字列「%s」の長さは %d バイトです。\n", str, strlen(str));
}

int main()
{
    DispLength("ベタぼめ");
    DispLength("ウソ エイト・オー・オー");
    DispLength("");

    return 0;
}