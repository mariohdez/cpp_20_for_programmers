#include <fmt/format.h>
#include <iostream>
#include <random>

using namespace std;

int main(int argc, const char * argv[]) {
    default_random_engine engine{};
    uniform_int_distribution randomDie{1, 6};
    
    int frequency1{0};
    int frequency2{0};
    int frequency3{0};
    int frequency4{0};
    int frequency5{0};
    int frequency6{0};

    for (int roll{1}; roll <= 60000000; ++roll)
    {
        switch (const int face{randomDie(engine)})
        {
            case 1:
                ++frequency1;
                break;
            case 2:
                ++frequency2;
                break;
            case 3:
                ++frequency3;
                break;
            case 4:
                ++frequency4;
                break;
            case 5:
                ++frequency5;
                break;
            case 6:
                ++frequency6;
                break;
            default:
                cout << "Program should never get here!";
                break;
        }
    }

    cout << fmt::format("{:>4}{:>13}\n", "Face", "Frequency");
    cout << fmt::format("{:>4d}{:>13d}\n", 1, frequency1)  << fmt::format("{:>4d}{:>13d}\n", 2, frequency2) << fmt::format("{:>4d}{:>13d}\n", 3, frequency3)<< fmt::format("{:>4d}{:>13d}\n", 4, frequency4)  << fmt::format("{:>4d}{:>13d}\n", 5, frequency5) << fmt::format("{:>4d}{:>13d}\n", 6, frequency6);

    return 0;
}
