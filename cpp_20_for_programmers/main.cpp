#include <fmt/format.h>
#include <iostream>
#include <random>

using namespace std;

int rollDice();

int main(int argc, const char * argv[]) {
    enum class Status {keepRolling, won, lost};

    int myPoint{0};
    Status gameStatus{Status::keepRolling};
    
    switch (const int sumOfDice{rollDice()}) {
        case 7:
        case 11:
            gameStatus = Status::won;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Status::lost;
            break;
        default:
            myPoint = sumOfDice;
            cout << fmt::format("Point is {}\n", myPoint); break;
    }
    
    while (Status::keepRolling == gameStatus)
    {
        if (const int sumOfDice{rollDice()}; sumOfDice == myPoint) {
            gameStatus = Status::won;
        }
        else if (sumOfDice==7) {
            gameStatus = Status::lost;
        }
    }
    
    if (Status::won == gameStatus)
    {
        cout << "Player wins\n";
    }
    else
    {
        cout << "Player loses\n";
    }

    return 0;
}

int rollDice() {
    static random_device rd;
    static default_random_engine engine{rd()};
    static uniform_int_distribution randomDie{1, 6};
    const int die1{randomDie(engine)};
    const int die2{randomDie(engine)};
    const int sum{die1 + die2};

    cout << fmt::format("Player rolled {} + {} = {}\n", die1, die2, sum);

    return sum;
}
