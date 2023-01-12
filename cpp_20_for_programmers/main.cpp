#include <fmt/format.h>
#include <iostream>
#include <array>

int main(int argc, const char * argv[]) {
    std::array items{1, 2, 3, 4, 5};

      // display items before modification
      std::cout << "items before modification: ";
      for (const int& item : items) {
          std::cout << fmt::format("{} ", item);
      }

      // multiply the elements of items by 2
      for (int& item : items) {
         item *= 2;
      }

      // display items after modification
      std::cout << "\nitems after modification: ";
      for (const int& item : items) {
         std::cout << fmt::format("{} ", item);
      }

    std::cout << std::endl;

    return 0;
}
