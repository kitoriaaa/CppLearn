#include "IntArray.h"
#include <iostream>

using namespace std;

void Disp(CIntArray array)
{
    int i;
    for (i = 0; i < array.NumOf(); i++)
        cout << array.Get(i) << ' ';
    cout << endl;
}

int main()
{
    CIntArray arrayAtoZ('Z' - 'A' + 1);
    int i;

    for (i = 0; i < arrayAtoZ.NumOf(); i++)
        arrayAtoZ.Set(i, 'A' + 1);
    Disp(arrayAtoZ);

    return 0;
}