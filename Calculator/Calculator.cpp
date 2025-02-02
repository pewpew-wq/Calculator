#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Which operation (+, /, -, *): ";
    cin >> operation;

    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = (num2 != 0) ? num1 / num2 : 0;
        if (num2 == 0) {
            cout << "Can't divide by zero" << endl;
        }
        break;
    default:
        cout << "invalid" << endl;
        return 1;
    }

    cout << "Answer: " << result << endl;

    return 0;
}