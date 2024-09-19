#include <iostream>
using namespace std;

int main() {

    //Die Variables
    int value;
    int digitCount;

    cout << "Enter value: ";
    cin >> value;

    // The Negative Fixer-Upper
    if (0 > value) {
        value = value * -1;
    }

    // The Great "If"ening
    if (value < 10) {
        digitCount = 1;
        cout << "There is/are " << digitCount << " number(s).";
    }
    if (10 <= value && value < 100) {
        digitCount = 2;
        cout << "There is/are " << digitCount << " number(s).";
    }
    if (100 <= value && value < 1000) {
        digitCount = 3;
        cout << "There is/are " << digitCount << " number(s).";
    }
    if (1000 <= value && value < 10000) {
        digitCount = 4;
        cout << "There is/are " << digitCount << " number(s).";
    }
    if (10000 <= value && value < 100000) {
        digitCount = 5;
        cout << "There is/are " << digitCount << " number(s).";
    }
    if (100000 <= value && value < 1000000) {
        digitCount = 6;
        cout << "There is/are " << digitCount << " number(s).";
    }
    if (1000000 <= value && value < 10000000) {
        digitCount = 7;
        cout << "There is/are " << digitCount << " number(s).";
    }
    if (10000000 < value && value < 100000000) {
        digitCount = 8;
        cout << "There is/are " << digitCount << " number(s).";
    }


}