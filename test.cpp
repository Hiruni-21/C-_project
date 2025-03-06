 // SimpleAddition.cpp

#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int subtractNumbers(int a, int b) {
    return a - b;
}

int main() {
    int num1 = 5;
    int num2 = 3;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << addNumbers(num1, num2) << endl;
    cout << "The difference between " << num1 << " and " << num2 << " is: " << subtractNumbers(num1, num2) << endl;
    return 0;
}

