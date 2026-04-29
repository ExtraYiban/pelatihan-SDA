// # Latihan Soal 8: Searching (Jump Search)
//
// ## Soal 8: Implementasi Jump Search
//
// Kamu diminta melengkapi algoritma jump search untuk mencari elemen
// dalam array yang sudah terurut. Jump search melompat dengan ukuran
// langkah optimal sebelum melakukan pencarian linear.
//
// Konsep Kunci:
// - Jump Search lebih cepat dari linear search untuk array besar.
// - Langkah optimal adalah sqrt(n) untuk meminimalkan perbandingan.
// - Algoritma: lompat -> periksa -> lompat lagi -> pencarian linear.
// - Kompleksitas: O(sqrt(n)) dalam rata-rata kasus.

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

/**
 * @brief Cari target dalam array terurut menggunakan jump search.
 * @param arr Array yang sudah terurut.
 * @param n Jumlah elemen dalam array.
 * @param target Nilai yang dicari.
 * @return Indeks awal blok tempat pencarian linear dimulai, atau -1 jika tidak ada.
 * @logic
 * 1. Hitung step = sqrt(n).
 * 2. Gunakan prev untuk menyimpan indeks blok sebelumnya.
 * 3. Lompat sebesar step sampai menemukan blok yang mungkin berisi target.
 * 4. Jika target belum ditemukan setelah semua lompatan, return -1.
 */
int jumpSearch(int arr[], int n, int target) {
    // TODO: Lengkapi fungsi jump search dengan perhitungan step dan looping.
    // ---- MULAI KODE DI SINI ----

    

    // ---- AKHIR KODE DI SINI ----
    return -1;
}

int main() {
    int data[] = {1, 3, 5, 7, 9, 11, 13};
    cout << "Pencarian dimulai dari indeks: " << jumpSearch(data, 7, 9);
    /* Harusnya output:
       Pencarian dimulai dari indeks: 2
    */
    return 0;
}
