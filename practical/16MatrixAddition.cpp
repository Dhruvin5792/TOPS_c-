#include <iostream>
using namespace std;

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

     cout << "Enter elements of Matrix 1 (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Matrix1[" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }
    
	cout << "\nEnter elements of Matrix 2 (2x2):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Matrix2[" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

   for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nResult of Matrix Addition:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << "\n";
    }
}

