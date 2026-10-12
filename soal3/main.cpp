#include <iostream>
#include "arraypointer.h"

using namespace std;

int main() {

    int array1[BARIS][KOLOM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[BARIS][KOLOM] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    int a = 100;
    int b = 200;

    int *p1 = &a;
    int *p2 = &b;

    cout << "=== ARRAY SEBELUM DITUKAR ===" << endl;

    cout << "\nArray 1:" << endl;
    tampilArray(array1);

    cout << "\nArray 2:" << endl;
    tampilArray(array2);

    tukarArray(array1, array2, 1, 1);

    cout << "\n=== ARRAY SETELAH DITUKAR ===" << endl;

    cout << "\nArray 1:" << endl;
    tampilArray(array1);

    cout << "\nArray 2:" << endl;
    tampilArray(array2);

    cout << "\n=== POINTER SEBELUM DITUKAR ===" << endl;
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;

    tukarPointer(p1, p2);

    cout << "\n=== POINTER SETELAH DITUKAR ===" << endl;
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;

    return 0;
}