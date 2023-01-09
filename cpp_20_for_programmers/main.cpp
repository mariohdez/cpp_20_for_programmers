#include <iostream>
#include <random>

using namespace std;

int main(int argc, const char * argv[]) {
    default_random_engine engine{};
    uniform_int_distribution randomDie{1, 6};
    
    for (int counter{1}; counter <= 10; ++counter)
    {
        cout << randomDie(engine) << " ";
    }

    cout << "\n";

    return 0;
}
