#include <iostream>
using namespace std;

int main()
{
    int a, b, sign, result, i;

    for (i = 0; i < 5; i++)
    {
        cout << "第1項 > ";
        cin >> a;
        cout << "第2項 > ";
        cin >> b;
        cout << "どれをしますか（1：加算，2：減算，3：乗算，4：除算 ） > ";
        cin >> sign;

        switch (sign)
        {
            case 1:
                result = a + b; break;
            case 2:
                result = a - b; break;
            case 3:
                result = a * b; break;
            case 4:
                result = a / b; break;
            default:
                cout << "真面目にせんかい！" << endl;
                continue;
        }

        cout << "答えは" << result << "です．" << endl;
    }
}