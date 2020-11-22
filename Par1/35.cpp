#include <iostream>
using namespace std;

void DisplayAddresses(char *pointer)
{
    int i;

    printf("pointer     : %p\n", pointer);
    for (i = 0; i < 10; i++)
        printf("&pointer[%d] : %p\n", i, &pointer[i]);
}

int main()
{
    int i;
    char array[10];

    printf("array     : %p\n\n", array);
    for (i = 0; i < 10; i++)
        printf("&array[%d] : %p\n", i, &array[i]);
    
    printf("\n");
    DisplayAddresses(array);
    return 0;
}