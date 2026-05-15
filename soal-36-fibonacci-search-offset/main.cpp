// # Latihan Soal 36: Fibonacci Search (Batas Eliminasi Kiri)
//
// ## Soal 36: Update Offset dalam Fibonacci Search Algorithm
//
// Kamu diminta melengkapi pembaruan nilai offset ketika target berada di
// sebelah kanan (lebih besar dari arr[i]). Offset ini digunakan untuk
// mengeliminasi bagian array yang sudah dicari.
//
// Konsep Kunci:
// - Offset: batas kiri area pencarian yang diperbarui setelah setiap iterasi.
// - Eliminasi: setiap perbandingan menghilangkan separuh array yang tidak relevan.
// - Fibonacci progression: fib2 dan fib1 diupdate sesuai posisi pencarian.
// - Search window: region pencarian dikurangi menggunakan offset.

#include <iostream>
#include <algorithm>
using namespace std;

/**
 * @brief Cari target dalam array terurut menggunakan Fibonacci Search.
 * @param arr Array yang sudah terurut.
 * @param n Ukuran array.
 * @param target Nilai yang dicari.
 * @return Indeks target jika ditemukan, -1 jika tidak.
 * @logic
 * 1. Inisialisasi bilangan Fibonacci hingga >= n.
 * 2. Inisialisasi offset = -1 untuk menandai batas pencarian.
 * 3. Iterasi selama fib > 1.
 * 4. Tentukan indeks i = min(offset + fib2, n-1).
 * 5. Jika arr[i] < target, update offset = i dan nilai fibonacci.
 * 6. Jika arr[i] > target, update fibonacci ke fib2.
 * 7. Jika arr[i] == target, return i.
 */
int fibSearch(int arr[], int n, int target) {
    int f2 = 0, f1 = 1, fib = 1;
    while (fib < n) {
        f2 = f1;
        f1 = fib;
        fib = f1 + f2;
    }
    int offset = -1;
    while (fib > 1) {
        int i = min(offset + f2, n - 1);
        if (arr[i] < target) {
            fib = f1;
            f1 = f2;
            f2 = fib - f1;
            // TODO: Lengkapi pembaruan offset saat target di kanan.
            // ---- MULAI KODE DI SINI ----

            // ---- AKHIR KODE DI SINI ----
        } else if (arr[i] > target) {
            fib = f2;
            f1 = f1 - f2;
            f2 = fib - f1;
        } else return i;
    }
    return -1;
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int idx = fibSearch(data, 5, 40);
    cout << "Target 40 ditemukan di indeks: " << idx;
    /* Harusnya output:
       Target 40 ditemukan di indeks: 3
    */
    return 0;
}
