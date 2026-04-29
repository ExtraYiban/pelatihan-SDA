// # Latihan Soal 30: Analisis Kompleksitas (Binary Search vs Linear Search)
//
// ## Soal 30: Studi Kasus - Pemilihan Algoritma Pencarian pada Sistem Akademik
//
// Kamu diminta menganalisis dan membandingkan efisiensi dua algoritma pencarian
// (linear search dan binary search) pada dataset mahasiswa yang sudah terurut.
// Soal ini melatih critical thinking tentang pemilihan algoritma berdasarkan
// karakteristik data dan kompleksitas.
//
// Konsep Kunci:
// - Linear Search: O(n) - iterasi dari awal hingga target ditemukan.
// - Binary Search: O(log n) - eliminasi separuh data setiap iterasi.
// - Data Terurut: syarat wajib untuk menggunakan binary search.
// - Skala Besar: perbedaan O(n) vs O(log n) sangat signifikan saat n besar.

#include <iostream>
using namespace std;

/**
 * @brief Lakukan linear search pada array terurut.
 * @param arr Array data yang terurut.
 * @param n Jumlah elemen array.
 * @param target Nilai yang dicari.
 * @return Kompleksitas: O(n) - worst case iterasi n kali.
 * @logic
 * Iterasi dari indeks 0 hingga n-1, bandingkan setiap elemen dengan target.
 * Dalam worst case, target ada di akhir atau tidak ada, sehingga semua n elemen diperiksa.
 */
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

/**
 * @brief Lakukan binary search pada array terurut.
 * @param arr Array data yang terurut.
 * @param n Jumlah elemen array.
 * @param target Nilai yang dicari.
 * @return Kompleksitas: O(log n) - setiap iterasi eliminasi separuh data.
 * @logic
 * Tentukan midpoint, bandingkan arr[mid] dengan target.
 * Jika target < arr[mid], cari di separuh kiri; jika >, cari di separuh kanan.
 * Terus eliminasi hingga target ditemukan atau data habis.
 */
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    // Studi Kasus: Sistem akademik dengan 1.000.000 data mahasiswa terurut berdasarkan NIM
    int n = 1000000;
    
    cout << "=== ANALISIS KOMPLEKSITAS ===" << endl;
    cout << "Jumlah data mahasiswa: " << n << endl << endl;
    
    cout << "Linear Search:" << endl;
    cout << "- Kompleksitas: O(n)" << endl;
    cout << "- Worst case: " << n << " operasi" << endl << endl;
    
    cout << "Binary Search:" << endl;
    cout << "- Kompleksitas: O(log n)" << endl;
    cout << "- Operasi maksimal: ~" << 20 << " (log2(1000000) ≈ 20)" << endl << endl;
    
    cout << "Kesimpulan:" << endl;
    cout << "Algoritma yang paling efisien adalah Pencarian Biner karena" << endl;
    cout << "laju pertumbuhannya jauh lebih lambat (efisien) saat jumlah" << endl;
    cout << "data n meningkat drastis." << endl;
    
    /* Harusnya output:
       === ANALISIS KOMPLEKSITAS ===
       Jumlah data mahasiswa: 1000000
       
       Linear Search:
       - Kompleksitas: O(n)
       - Worst case: 1000000 operasi
       
       Binary Search:
       - Kompleksitas: O(log n)
       - Operasi maksimal: ~20 (log2(1000000) ≈ 20)
       
       Kesimpulan:
       Algoritma yang paling efisien adalah Pencarian Biner karena
       laju pertumbuhannya jauh lebih lambat (efisien) saat jumlah
       data n meningkat drastis.
    */
    return 0;
}
