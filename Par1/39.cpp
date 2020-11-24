#include <iostream>
#include <stdint.h>

using namespace std;


// int main()
// {
//     int array[4];

//     cout << "&array[1]     : " << (uint64_t)&array[1]      << endl
//          << "&array[1] + 1 : " << (uint64_t)(&array[1] + 1) << endl
//          << "&array[2]     : " << (uint64_t)&array[2]     << endl;


//     return 0;
// }


int main()
{
    int array[4];
    int *p = array;

    cout << (uint64_t)p << endl;
    p += 2;
    cout << (uint64_t)p << endl;

    return 0;
}