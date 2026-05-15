// # Latihan Soal 39: Boyer-Moore Search (Logika Pergeseran Mismatch)
//
// ## Soal 39: Hitung Jarak Pergeseran pada Boyer-Moore Search
//
// Kamu diminta melengkapi rumus perhitungan variabel `geser` yang menentukan
// berapa jauh pattern harus digeser saat terjadi ketidakcocokan. Soal ini
// menggunakan tabel Bad Character untuk optimasi pencarian string.
//
// Konsep Kunci:
// - Bad Character Rule: geser berdasarkan indeks terakhir karakter yang tidak cocok.
// - Pergeseran minimum: jika perhitungan menghasilkan negatif, geser minimal 1.
// - Algoritma Boyer-Moore: dari kanan ke kiri, lebih efisien saat pattern panjang.
// - Preprocessing: tabel bad character memudahkan kalkulasi pergeseran.

#include <iostream>
#include <string>
#define ALFABET 256
using namespace std;

/**
 * @brief Hitung jarak pergeseran berdasarkan bad character table.
 * @param j Indeks dalam pattern di mana ketidakcocokan terjadi.
 * @param badCharTable Tabel indeks terakhir setiap karakter dalam pattern.
 * @param charDiTeks Karakter dari teks yang tidak cocok dengan pattern[j].
 * @return Jarak pergeseran pattern (minimum 1).
 * @logic
 * 1. Rumus: geser = j - badCharTable[charDiTeks].
 * 2. Jika geser < 1, kembalikan 1 (geser minimal 1 posisi).
 * 3. Jika geser >= 1, kembalikan geser.
 */
int hitungGeser(int j, int badCharTable[], char charDiTeks) {
    // TODO: Lengkapi rumus perhitungan geser Boyer-Moore.
    // ---- MULAI KODE DI SINI ----

    // ---- AKHIR KODE DI SINI ----
    return (geser < 1) ? 1 : geser;
}

int main() {
    int bc[ALFABET];
    for (int i = 0; i < ALFABET; i++) bc[i] = -1;
    bc[(int)'A'] = 0;
    bc[(int)'B'] = 1;
    bc[(int)'C'] = 2;
    
    // Jika mismatch di j=2 (posisi 'C'), character di teks adalah 'A'
    int geser = hitungGeser(2, bc, 'A');
    cout << "Jarak pergeseran: " << geser;
    /* Harusnya output:
       Jarak pergeseran: 2
    */
    return 0;
}
