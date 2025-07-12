#include<iostream>
using  namespace std;

 main() {
    int a = 67, b = 6;
    
	cout << "Arithmetic Operators:";
    cout << "\na + b = " << (a + b) ;
    cout << "\na - b = " << (a - b);
    cout << "\na * b = " << (a * b);
    cout << "\na / b = " << (a / b) ;
    cout << "\na % b = " << (a % b);

    cout << "\nRelational Operators:" ;
    cout << "\na == b: " << (a == b) ;
    cout << "\na != b: " << (a != b) ;
    cout << "\na > b: " << (a > b) ;
    cout << "\na < b: " << (a < b) ;
    cout << "\na >= b: " << (a >= b) ;
    cout << "\na <= b: " << (a <= b) ;

    cout << "\nLogical Operators:" ;
    cout << "\na && b: " << (a && b);
    cout << "\na || b: " << (a || b) ;
    cout << "\n!a: " << (!a)  ;
    
	cout << "\nBitwise Operators:" ;
    cout << "\na & b: " << (a & b)  ;
    cout << "\na | b: " << (a | b) ;
    cout << "\na ^ b: " << (a ^ b) ;
    cout << "\n~a: " << (~a) ;
    cout << "\na << 1: " << (a << 1) ;
    cout << "\na >> 1: " << (a >> 1) ;

}


