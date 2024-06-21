#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^';
}

// Function to check if a character is a digit
bool isDigit(char c) {
    return isdigit(c);
}

// Function to perform arithmetic operations
double performOperation(double num1, double num2, char op) {
    switch(op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0)
                return num1 / num2;
            else
                throw invalid_argument("Error: Division by zero is not allowed.");
        case '%':
            if (num2 != 0)
                return fmod(num1, num2); // Use fmod for floating point modulus
            else
                throw invalid_argument("Error: Modulus by zero is not allowed.");
        case '^':
            return pow(num1, num2);
        default:
            throw invalid_argument("Error: Unknown operation.");
    }
}

// Function to evaluate an arithmetic expression with precedence handling
double evaluateExpression(const string& expression) {
    stringstream ss(expression);
    char currentOp = '\0';
    double num1, num2;
    ss >> num1;
    while (ss >> currentOp >> num2) {
        num1 = performOperation(num1, num2, currentOp);
    }
    return num1;
}

// Function to handle square root operation
double squareRoot(double num) {
    if (num >= 0)
        return sqrt(num);
    else
        throw invalid_argument("Error: Cannot compute square root of a negative number.");
}

int main() {
    cout << "Welcome to the advanced interactive calculator!" << endl;
    cout << "Enter an expression or an operation followed by two numbers separated by spaces." << endl;
    cout << "Supported operations: +, -, *, /, % (modulus), ^ (exponentiation), sqrt (square root)" << endl;
    cout << "Expressions can include parentheses for grouping." << endl;
    cout << "To exit, press Ctrl+D (on Linux/macOS) or Ctrl+Z (on Windows) followed by Enter." << endl;

    string input;
    while (getline(cin, input)) {
        try {
            stringstream ss(input);
            char op;
            double num1, num2;
            if (ss >> op >> num1 >> num2) {
                double result = performOperation(num1, num2, op);
                cout << "Result: " << result << endl;
            } else if (input.substr(0, 4) == "sqrt") {
                double num = stod(input.substr(5)); // Extract number after "sqrt "
                double result = squareRoot(num);
                cout << "Result: " << result << endl;
            } else {
                double result = evaluateExpression(input);
                cout << "Result: " << result << endl;
            }
        } catch (const exception& e) {
            cout << e.what() << endl;
        }
    }

    cout << "Calculator terminated." << endl;
    return 0;
}
