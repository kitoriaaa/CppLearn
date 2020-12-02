#include "intArray.h"
#include <iostream>
#include <stddef.h>

using namespace std;

void Viss(const int num)
{
    cout << "Viss : No." << num << endl;
}

CIntArray a(10);

int main()
{
    CIntArray b(20);
    cout << b.NumOf() << endl;
    Viss(1);

    CIntArray c(30);
    Viss(2);

    {
        CIntArray d(40);
        Viss(3);
    }
    Viss(4);

    return 0;
}