// # Latihan Soal 22: Array 3 Dimensi (Akses Layer)
//
// ## Soal 22: Traversal Layer tertentu pada Array 3D
//
// Kamu diminta melengkapi perulangan untuk menampilkan data pada layer
// (dimensi ketiga) tertentu dalam array 3D. Soal ini melatih pemahaman
// tentang struktur data multi-dimensi dan akses elemen dengan berbagai
// kombinasi indeks.
//
// Konsep Kunci:
// - Array 3D: struktur data tiga dimensi [layer][baris][kolom].
// - Layer: setiap "lembaran" dalam array 3D.
// - Traversal: mengakses setiap elemen pada layer tertentu.
// - Nested loops: dua loop untuk baris dan kolom pada layer yang dipilih.

#include <iostream>
using namespace std;

/**
 * @brief Tampilkan semua elemen pada layer tertentu array 3D.
 * @param arr Pointer ke array 3D.
 * @param layer Nomor layer yang akan ditampilkan.
 * @param rows Jumlah baris per layer.
 * @param cols Jumlah kolom per baris.
 * @logic
 * 1. Iterasi melalui setiap baris (j) pada layer tertentu.
 * 2. Untuk setiap baris, iterasi melalui setiap kolom (k).
 * 3. Akses elemen menggunakan arr[layer][j][k].
 * 4. Cetak elemen dan pindah ke baris berikutnya setelah kolom selesai.
 */
void cetakLayer(int arr[][2][2], int layer, int rows, int cols) {
    cout << "Isi Layer ke-" << layer << ":" << endl;
    // TODO: Lengkapi loop untuk baris (j) dan kolom (k).
    // ---- MULAI KODE DI SINI ----

    // ---- AKHIR KODE DI SINI ----
}

int main() {
    int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    
    cetakLayer(arr, 1, 2, 2);
    /* Harusnya output:
       Isi Layer ke-1:
       5 6 
       7 8 
    */
    return 0;
}
