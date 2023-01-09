#include <fmt/format.h>
#include <iostream>
#include <array>

int main(int argc, const char * argv[]) {
    std::array<int, 5> values;
    
    for (size_t i{0}; i < values.size(); ++i)
    {
        values[i] = 0;
    }
    
    std::cout << fmt::format("{:>7}{:>10}\n", "Element", "Value");
    
    for (size_t i{0}; i < values.size(); ++i)
    {
        std::cout << fmt::format("{:>7}{:>10}\n", i, values[i]);
    }

    return 0;
}
