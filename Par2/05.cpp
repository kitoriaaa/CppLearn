#include <iostream>
#include <memory.h>

#define ELEM(array) (sizeof(array) / sizeof *(array))

using namespace std;

class CIntArray {
private:
    int m_anum[100];

public:
    CIntArray();
    int Get(const int index);
    void Set(const int index, const int value);

private:
    void CheckIndex(const int index);
};

CIntArray::CIntArray()
{
    memset(m_anum, 0, sizeof m_anum);
}

int CIntArray::Get(const int index)
{
    CheckIndex(index);
    return m_anum[index];
}

void CIntArray::Set(const int index, const int value)
{
    CheckIndex(index);
    m_anum[index] = value;
}

void CIntArray::CheckIndex(const int index)
{
    if ((unsigned int)index < ELEM(m_anum))
        return;

    cout << "インデックスが不正です．" << endl
         << "値 : " << index << endl;
    exit(1);
}

int main()
{
    CIntArray a;
    a.Set(10, 20);
    // a.Set(200, 1);

    for (int i = 0;; i++)
        cout << a.Get(i) << endl;

    return 0;
}