/*
Latihan Soal 1: Array & Pointer (Akses Memori)

Kamu diminta melengkapi fungsi untuk menampilkan elemen array menggunakan
pointer arithmetic. Soal ini melatih pemahaman bahwa array bisa diakses lewat
alamat memori, bukan hanya indeks.

Tugas:
- Lengkapi fungsi cetakArray agar seluruh elemen array tampil satu per satu.
- Gunakan pointer arithmetic saat membaca nilai array.

Petunjuk:
1. Gunakan parameter ptr sebagai alamat awal array.
2. Akses elemen dengan *(ptr + i).
3. Cetak setiap nilai pada baris terpisah.
*/

#include <iostream>
using namespace std;

// Soal 1: tampilkan elemen array menggunakan pointer arithmetic.
void cetakArray(int *ptr, int n) {
    // TODO: tampilkan seluruh elemen array menggunakan pointer arithmetic.
    // Hint: gunakan *(ptr + i) di dalam perulangan.
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int n = 5;
    cout << "Daftar Nilai Array:" << endl;
    cetakArray(data, n);
    return 0;
}
