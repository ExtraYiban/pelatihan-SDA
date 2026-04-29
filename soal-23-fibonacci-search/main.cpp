// # Latihan Soal 23: Fibonacci Search (Indeks Eliminasi)
//
// ## Soal 23: Implementasi Pencarian Fibonacci dengan Eliminasi Indeks
//
// Kamu diminta melengkapi penentuan indeks dalam algoritma Fibonacci Search.
// Algoritma ini menggunakan bilangan Fibonacci untuk membagi array dan
// mengeliminasi bagian yang tidak diperlukan, lebih efisien dari linear
// search namun dengan pola yang unik.
//
// Konsep Kunci:
// - Fibonacci Search: algoritma pencarian O(log n) menggunakan bilangan Fibonacci.
// - Bilangan Fibonacci: deret 0, 1, 1, 2, 3, 5, 8, 13, ... (F(n) = F(n-1) + F(n-2)).
// - Offset: posisi awal pencarian yang berkembang seiring eliminasi.
// - Indeks pembagi: ditentukan dari fib2 + offset untuk membagi array.

#include <iostream>
using namespace std;

/**
 * @brief Cari target dalam array terurut menggunakan Fibonacci Search.
 * @param arr Array yang sudah terurut.
 * @param n Ukuran array.
 * @param target Nilai yang dicari.
 * @return Indeks target jika ditemukan, -1 jika tidak.
 * @logic
 * 1. Inisialisasi bilangan Fibonacci: fib2=0, fib1=1, fib=1.
 * 2. Cari fib terkecil yang >= n.
 * 3. Inisialisasi offset = -1.
 * 4. Selama fib > 1, tentukan indeks i untuk membagi array.
 * 5. Bandingkan arr[i] dengan target dan update fib serta offset.
 */
int fibonacciSearch(int arr[], int n, int target) {
    int fib2 = 0, fib1 = 1, fib = 1;
    while (fib < n) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib1 + fib2;
    }
    int offset = -1;
    while (fib > 1) {
        // TODO: Lengkapi penentuan indeks i dengan kondisi offset + fib2.
        // ---- MULAI KODE DI SINI ----
        int i = (offset + fib2 < n - 1) ? offset + fib2 : n - 1;
        // ---- AKHIR KODE DI SINI ----
        if (arr[i] < target) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        } else if (arr[i] > target) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        } else return i;
    }
    return -1;
}

int main() {
    int data[] = {10, 22, 35, 40, 45};
    int idx = fibonacciSearch(data, 5, 40);
    cout << "Indeks target 40 ditemukan di: " << idx;
    /* Harusnya output:
       Indeks target 40 ditemukan di: 3
    */
    return 0;
}
