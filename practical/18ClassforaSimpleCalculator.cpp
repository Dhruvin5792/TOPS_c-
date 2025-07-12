#include <iostream>
using namespace std;
class Calculator {
public:
    float add(float a, float b) {
        return a + b;
    }
    float subtract(float a, float b) {
        return a - b;
    }
    float multiply(float a, float b) {
        return a * b;
    }
    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    float num1, num2; 
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nResults:\n";
    cout << "\n Addition: " << calc.add(num1, num2);
    cout << "\n Subtraction: " << calc.subtract(num1, num2);
    cout << "\n Multiplication: " << calc.multiply(num1, num2);
    cout << "\n Division: " << calc.divide(num1, num2);
}

