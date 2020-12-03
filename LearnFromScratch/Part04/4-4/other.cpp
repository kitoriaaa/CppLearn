#include "other.h"

#include <iostream>

namespace
{
    int hoge = 0;
} // namespace

void IncrementHoge()
{
    ++hoge;
}

void PrintHoge()
{
    std::cout << "other.cpp: " << hoge << std::endl;
}