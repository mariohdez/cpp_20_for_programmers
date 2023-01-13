#include <fmt/format.h>
#include <iostream>
#include <array>
#include <vector>
#include <numeric>

void cubeByReference(int* nPtr);

int main(int argc, const char * argv[]) {
    int number{5};

    std::cout<< fmt::format("Original value of number is {}\n", number);
    
    cubeByReference(&number);
    
    std::cout << fmt::format("New value of number is {}\n", number);

    return 0;
}

void cubeByReference(int* nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}
