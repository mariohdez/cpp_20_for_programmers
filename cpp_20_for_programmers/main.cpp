#include <fmt/format.h>
#include <iostream>
#include <array>

constexpr size_t rows{2};
constexpr size_t columns{3};

int main(int argc, const char * argv[]) {
    constexpr std::array<std::array<int, columns>, rows> values{
        {
            {1,2,3},
            {4,5,6},
        }
    };
    
    for (size_t row{0}; row < rows; ++row)
    {
        for (size_t column{0}; column < columns; ++column)
        {
            std::cout << values.at(row).at(column) << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
