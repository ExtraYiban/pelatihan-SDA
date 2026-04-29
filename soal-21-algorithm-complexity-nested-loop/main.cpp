// # Latihan Soal 21: Analisis Kompleksitas Algoritma (Loop Bersarang)
//
// ## Soal 21: Hitung Notasi O-Besar pada Perkalian Matriks Sederhana
//
// Kamu diminta melengkapi komentar untuk menentukan kompleksitas waktu dari
// algoritma perkalian matriks yang memiliki tiga loop bersarang. Analisis ini
// penting untuk memahami bagaimana performa algoritma berkembang dengan
// peningkatan ukuran input.
//
// Konsep Kunci:
// - Big O Notation: menggambarkan pertumbuhan waktu eksekusi terhadap ukuran input.
// - Nested Loop: setiap loop tambahan mengalikan kompleksitas dengan faktor n.
// - O(n^3): tiga loop bersarang masing-masing iterasi n kali = n × n × n.
// - Perkalian Matriks: operasi O(n^3) karena 3 nested loops pada dimensi matriks.

#include <iostream>
using namespace std;

/**
 * @brief Simulasi perkalian matriks sederhana dengan tiga nested loops.
 * @param n Dimensi matriks n×n.
 * @logic
 * 1. Loop pertama (i): iterasi dari 0 hingga n-1 untuk baris matriks A.
 * 2. Loop kedua (j): iterasi dari 0 hingga n-1 untuk kolom matriks B.
 * 3. Loop ketiga (k): iterasi dari 0 hingga n-1 untuk akumulasi dot product.
 * 4. Total operasi: n × n × n = n^3 operasi perkalian.
 */
void perkalianMatriks(int n) {
    // TODO: Lengkapi analisis kompleksitas di bagian komentar.
    // ---- MULAI KODE DI SINI ----
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int total = 0;
            for (int k = 0; k < n; k++) {
                total += i * j; // Simulasi operasi perkalian
            }
        }
    }
    // ---- AKHIR KODE DI SINI ----
}

int main() {
    int n = 10;
    perkalianMatriks(n);
    cout << "Analisis Kompleksitas: Tiga buah nested loop, kompleksitas O(n^3), kategori Kubik.";
    /* Harusnya output:
       Analisis Kompleksitas: Tiga buah nested loop, kompleksitas O(n^3), kategori Kubik.
    */
    return 0;
}
