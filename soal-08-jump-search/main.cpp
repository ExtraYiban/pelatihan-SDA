/*
Latihan Soal 8: Searching (Jump Search)

Kamu diminta melengkapi langkah lompatan pada algoritma jump search. Inti dari
algoritma ini adalah melompat dengan ukuran langkah optimal sebelum masuk ke
pencarian linear.

Tugas:
- Lengkapi perhitungan step menggunakan sqrt(n).
- Siapkan variabel prev sebagai titik awal blok pencarian.

Petunjuk:
1. Ukuran langkah awal biasanya sqrt(n).
2. prev menyimpan indeks blok sebelumnya.
3. Jika target belum ditemukan, geser step dan ulangi.
*/

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

// Soal 8: hitung langkah lompatan optimal dengan sqrt(n).
int jumpSearch(int arr[], int n, int target) {
    // TODO: tentukan step awal dengan sqrt(n), lalu lakukan jump search.
    // Hint: gunakan prev sebagai batas awal blok.
    return -1;
}

int main() {
    int data[] = {1, 3, 5, 7, 9, 11, 13};
    cout << "Pencarian dimulai dari indeks: " << jumpSearch(data, 7, 9);
    return 0;
}
