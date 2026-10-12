#ifndef ARRAYPOINTER_H_INCLUDED
#define ARRAYPOINTER_H_INCLUDED

const int BARIS = 3;
const int KOLOM = 3;

void tampilArray(int arr[BARIS][KOLOM]);

void tukarArray(int arr1[BARIS][KOLOM],
                int arr2[BARIS][KOLOM],
                int baris,
                int kolom);

void tukarPointer(int *p1, int *p2);

#endif // ARRAYPOINTER_H_INCLUDED
