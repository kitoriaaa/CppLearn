#include <stdio.h>
using namespace std;

int main()
{
    const int KUKU_LIMIT = 9;
    int nKuKu[KUKU_LIMIT][KUKU_LIMIT];
    int i, j;
    
    for (i = 1; i <= KUKU_LIMIT; i++)
        for (j = 1; j <= KUKU_LIMIT; j++)
            nKuKu[i-1][j-1] = i*j;

    printf("   1  2  3  4  5  6  7  8  9\n");
    for (i = 1; i <= KUKU_LIMIT; i++)
    {
        printf("%d ", i);
        for (j = 1; j <= KUKU_LIMIT; j++)
            printf("%2d ", nKuKu[i - 1][j - 1]);
        putchar('\n');
    }

    return 0;
}