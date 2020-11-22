#include <iostream>
using namespace std;

int ChangeToShohwa(int a)
{
    if (1926 <= a && a <= 1989)
        return a - 1925;
    else
        return 0;
}


void Shohwa()
{
    int a;

    cout << "西暦を入力してください > ";
    cin >> a;

    if (ChangeToShohwa(a))
        cout << "その年は昭和" << ChangeToShohwa(a)
             << "です．" << endl;
    else
        cout << "その年は昭和ではありません." << endl;
}


void Points()
{
    int a;
    cout << "テストは何点でしたか > ";
    cin >> a;

    cout << "へー，" << a * (0 <= a && a <= 100)
         << "点でしたか．" << endl;
}

int main()
{
    // Shohwa();
    // Shohwa();
    Points();
    Points();
    return 0;
}