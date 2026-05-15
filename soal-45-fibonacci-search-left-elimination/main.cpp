// # Latihan Soal 45: Fibonacci Search (Eliminasi Range)
//
// ## Soal 45: Update Nilai Fibonacci Saat Geser ke Kiri
//
// Kamu diminta melengkapi pembaruan variabel Fibonacci ketika target lebih
// kecil dari elemen saat ini. Kondisi ini berarti area pencarian bergeser
// ke kiri dan ukuran range dipersempit.
//
// Konsep Kunci:
// - Fibonacci search: membagi range berdasarkan bilangan Fibonacci.
// - Geser kiri: terjadi saat arr[i] > target.
// - Update variabel: fib, f1, f2 menyesuaikan subrange kiri.
// - Kompleksitas: O(log n).

#include <iostream>
#include <algorithm>
using namespace std;

/**
 * @brief Cari target dengan Fibonacci Search.
 * @param arr Array terurut.
 * @param n Ukuran array.
 * @param target Nilai target.
 * @return Indeks target atau -1.
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
            offset = i;
        } else if (arr[i] > target) {
            // TODO: Lengkapi logika geser kiri.
            // ---- MULAI KODE DI SINI ----

            // ---- AKHIR KODE DI SINI ----
        } else {
            return i;
        }
    }

    if (f1 && offset + 1 < n && arr[offset + 1] == target) return offset + 1;
    return -1;
}

int main() {
    int data[] = {10, 20, 30, 40, 50};
    cout << "Ditemukan di indeks: " << fibSearch(data, 5, 30);
    /* Harusnya output:
       Ditemukan di indeks: 2
    */
    return 0;
}
