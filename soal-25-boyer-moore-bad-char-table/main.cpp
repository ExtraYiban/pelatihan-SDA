// # Latihan Soal 25: Boyer-Moore Search (Bad Character Table)
//
// ## Soal 25: Preprocessing Tabel Bad Character untuk Pencarian String
//
// Kamu diminta melengkapi pengisian tabel `badChar` yang menyimpan indeks
// terakhir dari setiap karakter dalam pattern string. Tabel ini digunakan
// oleh algoritma Boyer-Moore untuk melompat karakter yang tidak cocok
// saat matching.
//
// Konsep Kunci:
// - Bad Character Table: menyimpan posisi terakhir setiap karakter dalam pattern.
// - Boyer-Moore: algoritma pencarian string dengan preprocessing.
// - Lompatan: ketika karakter tidak cocok, lompat sesuai jarak dalam tabel.
// - Indeks terakhir: jika karakter muncul berkali-kali, ambil posisi terbesar.

#include <iostream>
#include <string>
#define ALFABET 256
using namespace std;

/**
 * @brief Buat tabel Bad Character untuk digunakan dalam Boyer-Moore Search.
 * @param pattern String pattern yang akan diproses.
 * @param m Panjang pattern.
 * @param tabel Array untuk menyimpan indeks terakhir setiap karakter.
 * @logic
 * 1. Inisialisasi semua nilai tabel dengan -1 (karakter tidak ditemukan).
 * 2. Iterasi melalui setiap karakter dalam pattern.
 * 3. Untuk setiap karakter, simpan indeks ke-i di tabel[karakter].
 * 4. Karena iterasi maju, indeks terakhir akan tertimpa (update).
 */
void buatTabelBadChar(string pattern, int m, int tabel[]) {
    for (int i = 0; i < ALFABET; i++) tabel[i] = -1;
    
    // TODO: Lengkapi pengisian tabel dengan indeks terakhir setiap karakter.
    // ---- MULAI KODE DI SINI ----



    // ---- AKHIR KODE DI SINI ----
}

int main() {
    int bc[ALFABET];
    string pat = "ABC";
    buatTabelBadChar(pat, 3, bc);
    cout << "Indeks terakhir karakter 'B': " << bc[(int)'B'];
    /* Harusnya output:
       Indeks terakhir karakter 'B': 1
    */
    return 0;
}
