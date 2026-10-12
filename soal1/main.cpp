#include <iostream>
#include <string>
#include "mahasiswa.h"

using namespace std;

int main() {
    mahasiswa data[10];
    int n;

    cout << "Jumlah mahasiswa (maksimal 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Jumlah mahasiswa harus antara 1 sampai 10." << endl;
        return 0;
    }

    cout << "\n=== INPUT DATA MAHASISWA ===" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        inputmahasiswa(data[i]);
    }

    cout << "\n=== DATA MAHASISWA ===" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        tampilmahasiswa(data[i]);
    }

    return 0;
}
