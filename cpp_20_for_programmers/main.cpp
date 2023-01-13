#include <fmt/format.h>
#include <iostream>
#include <array>
#include <vector>
#include <numeric>

void cubeByReference(int* nPtr);

int main(int argc, const char * argv[]) {
    int n[5]{50, 20, 30, 10, 40};

    return 0;
}

void cubeByReference(int* nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}
