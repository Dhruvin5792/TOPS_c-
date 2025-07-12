#include <iostream>
using namespace std;


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
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    float num1, num2;
    int choice;

    
    cout << " Arithmetic Operations\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

  
    switch (choice) {
        case 1:
            cout << "Result = " << add(num1, num2) ;
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2) ;
            break;
        case 4:
            cout << "Result = " << divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!"  ;
    }

    
}

