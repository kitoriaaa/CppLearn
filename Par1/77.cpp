#include <iostream>

using namespace std;

enum ECompare
{
    LESSTHAN,
    EQUALTO,
    GREATERTHAN,
};

ECompare Compare(int a, int b)
{
    return (a < b) ? LESSTHAN:
           (a > b) ? GREATERTHAN : EQUALTO;
}


bool Compare()
{
    const char *pszResult[] = {
        "前者は後者より小さいです．",
        "両者は等しいです．",
        "前者は後者より大きいです．",
    };

    int a, b;

    cout << "数字を2つ入力してください > " << flush;
    cin >> a >> b;

    if (a == -1)
        return false;
    cout << pszResult[Compare(a, b)] << " " << Compare(a, b) << endl;
    return true;
}


int main()
{
    const char *test = "Hello World";
    cout << test << endl;
    while (Compare());
    return 0;
}

