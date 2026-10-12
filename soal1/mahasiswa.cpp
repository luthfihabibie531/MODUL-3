#include <iostream>
#include <string>
#include "mahasiswa.h"

using namespace std;

float hitungNilaiAkhir(mahasiswa m) {
    return (0.3f * m.uts) +
           (0.4f * m.uas) +
           (0.3f * m.tugas);
}

void inputmahasiswa(mahasiswa &m) {
    cin.ignore();  // bersihkan newline dari input sebelumnya

    cout << "Nama        : ";
    getline(cin, m.nama);

    cout << "NIM         : ";
    cin >> m.nim;

    cout << "Nilai UTS   : ";
    cin >> m.uts;

    cout << "Nilai UAS   : ";
    cin >> m.uas;

    cout << "Nilai Tugas : ";
    cin >> m.tugas;

    m.nilaiAkhir = hitungNilaiAkhir(m);
}

void tampilmahasiswa(mahasiswa m) {
    cout << "Nama        : " << m.nama       << endl;
    cout << "NIM         : " << m.nim        << endl;
    cout << "Nilai UTS   : " << m.uts        << endl;
    cout << "Nilai UAS   : " << m.uas        << endl;
    cout << "Nilai Tugas : " << m.tugas      << endl;
    cout << "Nilai Akhir : " << m.nilaiAkhir << endl;
}