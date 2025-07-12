#include <iostream>
using namespace std;

int globalVar = 100;

void showLocal() {
    int globalVar = 10;
    cout << "\nInside showLocal() - Local globalVar: " << globalVar ;
}
void showGlobal() {
    cout << "\nInside showGlobal() - Global globalVar: " << ::globalVar ;
   
}
int main() {
    cout << "\nIn main() - Global globalVar: " << globalVar ;

    showLocal();   
    showGlobal();  
}


