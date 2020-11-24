#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b;

    cout << "直角を挟む2辺の長さを入力してください > ";
    cin >> a >> b;

    cout << "斜辺の長さは "
         << sqrt(a * a + b * b) << "です．" << endl;

    return 0;
}
