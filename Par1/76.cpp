#include <iostream>

using namespace std;

enum ECompare
{
    LESSTHAN    = 0,
    EQUALTO     = 1,
    GREATERTHAN = 2,
};

ECompare Compare(int a, int b)
{
    return (a < b) ? LESSTHAN : 
           (a > b) ? GREATERTHAN : EQUALTO;
}


bool Compare()
{
    int a, b;

    cout << "数字を2つ入力してください > " << flush;
    cin >> a >> b;

    if (a == -1)
        return false;
    
    switch(Compare(a, b))
    {
        case LESSTHAN:
            cout << "前者は後者より小さいです．" << endl;
            break;
        case EQUALTO:
            cout << "両者は等しいです．" << endl;
            break;
        case GREATERTHAN:
            cout << "前者は後者より大きいです．" << endl;
            break;
    }

    return true;
}


int main()
{
    while (Compare());
    return 0;
}
