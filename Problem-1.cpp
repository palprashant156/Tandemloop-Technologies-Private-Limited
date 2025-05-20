#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;
    char op;

public:
    void getInput() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void performCalculation() {
        cout << "Calculating...\n";
        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid operator. Please use +, -, *, or /." << endl;
        }
    }
};

int main() {
    Calculator calc;
    calc.getInput();
    calc.performCalculation();
    return 0;
}
