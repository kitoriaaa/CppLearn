#include <stdio.h>

int strcnt(const char *psz, int letter)
{
    int num;
    for (num = 0; *psz; psz++)
    {
        if (*psz == letter)
            num++;
    }
    return num;
}

int main()
{
    char szPath[] = "C:/test/b/z/test.exe";
    
    printf("ファイル %s は %d 重のフォルダの中に入っている\n",
        szPath, strcnt(szPath, '/') - 1);

    return 0;
}