#include <fmt/format.h>
#include <iostream>
#include <array>
#include <vector>
#include <numeric>

int main(int argc, const char * argv[]) {
    std::vector<int> values(10);

    try {
        std::cout << "\nAttempt to display integers.at(15)\n";
        std::cout << values.at(10000);
    } catch (const std::out_of_range& ex) {
        std::cerr << ex.what() << "\n";
    }
    return 0;
}
