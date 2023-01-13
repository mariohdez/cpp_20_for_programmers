#include <fmt/format.h>
#include <iostream>
#include <array>
#include <vector>
#include <numeric>

int main(int argc, const char * argv[]) {
    constexpr int a{7};
    const int* aPtr{&a};
    
    std::cout << "The address of a is " << &a << "\n";
    std::cout << "The value of aPtr is " << aPtr << "\n";

    return 0;
}
