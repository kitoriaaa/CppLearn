#include <iostream>
using namespace std;


#define NUMBER_FIBO     16
#define LOOP(val, times)  for(val = 0; val < (times); val++)


int main()
{
    int i;
    int nFibo[NUMBER_FIBO] = {1, 1};

    LOOP(i, NUMBER_FIBO - 2)
        nFibo[i + 2] = nFibo[i] + nFibo[i + 1];
    cout << "フィボナッチ数列の最初の" << NUMBER_FIBO << "桁は" << endl;
    LOOP(i, NUMBER_FIBO-1)
        cout << nFibo[i] << ", ";
    cout << nFibo[i] << "です．" << endl;


    return 0;
}