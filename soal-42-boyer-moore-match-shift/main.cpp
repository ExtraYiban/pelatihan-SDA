// # Latihan Soal 42: Boyer-Moore Search (Pattern Matching Index)
//
// ## Soal 42: Hitung Pergeseran Lanjutan Saat Pattern Match
//
// Kamu diminta melengkapi rumus pergeseran setelah pola ditemukan (j < 0)
// pada Boyer-Moore. Rumus ini memungkinkan pencarian kemunculan berikutnya
// tanpa mengulang dari awal.
//
// Konsep Kunci:
// - Bad Character Table: menyimpan indeks terakhir karakter.
// - Geser saat match: gunakan karakter setelah window saat ini.
// - Efisiensi: menghindari perbandingan ulang yang tidak perlu.
// - Minimal geser: jika di ujung teks, geser 1 langkah.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/**
 * @brief Cari semua kemunculan pattern dalam text dengan Boyer-Moore.
 * @param text Teks sumber.
 * @param pattern Pola yang dicari.
 * @param badChar Tabel bad character berukuran 256.
 * @logic
 * 1. Geser window dengan variabel s.
 * 2. Cocokkan dari kanan ke kiri (j = m - 1).
 * 3. Jika match penuh (j < 0), cetak posisi s.
 * 4. Geser dengan rumus bad character untuk mencari match berikutnya.
 */
void searchBoyerMoore(const string &text, const string &pattern, int badChar[]) {
    int n = static_cast<int>(text.size());
    int m = static_cast<int>(pattern.size());
    int s = 0;

    while (s <= (n - m)) {
        int j = m - 1;
        while (j >= 0 && pattern[j] == text[s + j]) j--;
        if (j < 0) {
            cout << "Pola ditemukan pada geseran: " << s << endl;
            // TODO: Lengkapi rumus geser berikutnya setelah match.
            // ---- MULAI KODE DI SINI ----

            // ---- AKHIR KODE DI SINI ----
        } else {
            s += max(1, j - badChar[(int)text[s + j]]);
        }
    }
}

int main() {
    string text = "ABAAABCD";
    string pattern = "ABC";
    int badChar[256];

    for (int i = 0; i < 256; i++) badChar[i] = -1;
    for (int i = 0; i < (int)pattern.size(); i++) badChar[(int)pattern[i]] = i;

    searchBoyerMoore(text, pattern, badChar);
    /* Harusnya output:
       Pola ditemukan pada geseran: 4
    */
    return 0;
}
