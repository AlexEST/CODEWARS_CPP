//We need a function that can transform a number into a string.
//What ways of achieving this do you know?
//
//Examples:
//number_to_string(123) // "123"
//number_to_string(999) // "999"

#include <iostream>
#include<string>
using namespace std;

std::string number_to_string(int num) {
    return to_string(num);
}

int main() {
    cout<<number_to_string(123);
    return 0;
}
