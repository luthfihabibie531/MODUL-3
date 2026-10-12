#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Prototype fungsi
void  inputmahasiswa(mahasiswa &m);
float hitungNilaiAkhir(mahasiswa m);
void  tampilmahasiswa(mahasiswa m);

#endif
