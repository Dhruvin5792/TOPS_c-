#include <iostream>
using namespace std;

int main() {
    
    int intVal = 20;
    float floatVal = intVal;  

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to float: " << floatVal << endl;

    
    float a = 8.7;
    int b = 4;
    float result = a + b; 

    cout << "Result of a + b (float + int): " << result << endl;

 
    float original = 5.9;
    int casted = (int)original; 

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "Original float value: " << original << endl;
    cout << "Converted to int (casted): " << casted << endl;

   
    double d = 10.88;
    int i = static_cast<int>(d);

    cout << "Using static_cast: double " << d << " -> int " << i << endl;
}

