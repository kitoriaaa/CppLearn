#include <iostream>
using namespace std;

void ChengeToShohwa(int *p)
{
    if (1926 < *p && *p < 1989)
        *p -= 1925;
    else
        *p = 0;
}

void Shohwa()
{
    int nYear;
    
    cout << "西暦を入力してください > " ;
    cin >> nYear;

    ChengeToShohwa(&nYear);
    if (nYear)
        cout << "その年は昭和" << nYear
             << "年です．" << endl;
    else
        cout << "その年は昭和ではありません．" << endl;
}


int main()
{
    Shohwa();
    Shohwa();
    return 0;
}