#include <iostream>
#include <ctype.h>

#define BIT(num)        ((unsigned int)1 << (num))
#define SCEX_COPY       0
#define SCEX_ADD        BIT(0)
#define SCEX_TRIM       BIT(1)
#define SCEX_UPPER      BIT(2)
#define SCEX_LOWER      BIT(3)

using namespace std;

void strcpy_ex(char *pszDest, const char *pszSource, unsigned int flags);

int main()
{
    char buf[512];

    strcpy_ex(buf, "The ", SCEX_COPY);
    strcpy_ex(buf, "\t\t Country Is Called ", SCEX_ADD | SCEX_TRIM | SCEX_LOWER);
    strcpy_ex(buf, " usa.", SCEX_ADD | SCEX_UPPER);

    cout << buf << endl;
    cout << ((12+3)&(~3)) << endl;
    return 0;
}


void strcpy_ex(char *pszDest, const char *pszSource, unsigned int flags)
{
    if (flags & SCEX_ADD)
        for (; *pszDest; pszDest++);
    if (flags & SCEX_TRIM)
        for (; *pszSource == ' ' || *pszSource == '\t'; pszSource++);
    
    for (; *pszSource; pszSource++, pszDest++)
    {
        *pszDest = (flags & SCEX_UPPER) ? toupper((unsigned char)*pszSource) :
                   (flags & SCEX_LOWER) ? tolower((unsigned char)*pszSource) :
                   *pszSource;
    }
    pszDest--;
    if (flags & SCEX_TRIM)
        for (; *pszDest == ' ' || *pszDest == '\t'; pszDest--);
    pszDest[1] = '\0';
}