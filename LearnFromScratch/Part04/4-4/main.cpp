#include <iostream>

#include "other.h"

namespace {
int hoge = 0;
} // namespace

int main()
{
    hoge += 2;

    IncrementHoge();

    std::cout << "main.cpp: " << hoge << std::endl;

    PrintHoge();

    return 0;
}