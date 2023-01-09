#include <iostream>
#include <string>

using namespace std;

void fig_02_06() {
    string s1{"happy"};
    string s2{" birthday"};
    string s3;
    
    cout << "s1: \""<< s1 << "\"; length: " << s1.length() << "\ns2: \"" << s2 << "\"; length: " << s2.length() << "\ns3: \"" << s3 << "\"; length: "  << s3.length();
}

int fig_02_04() {
    int number1{0};
    int number2{0};
    int sum{0};

    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    sum = number1 + number2;

    std::cout << "Sum is: " << sum << "\n";

    return 0;
}

int main(int argc, const char * argv[]) {

    fig_02_06();

    return 0;
}
