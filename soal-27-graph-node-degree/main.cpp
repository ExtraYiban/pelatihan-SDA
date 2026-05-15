// # Latihan Soal 27: Graph (Menghitung Derajat Node)
//
// ## Soal 27: Hitung Degree (Derajat) Node pada Adjacency Matrix
//
// Kamu diminta melengkapi fungsi untuk menghitung degree sebuah node dengan
// menjumlahkan jumlah edge (nilai 1) pada baris matriks yang sesuai. Soal ini
// melatih pemahaman tentang adjacency matrix dan konsep derajat dalam graph.
//
// Konsep Kunci:
// - Degree: jumlah edge yang terhubung dengan sebuah node.
// - Adjacency Matrix: representasi 2D dari graph (1 = ada edge, 0 = tidak).
// - Baris node: semua edge dari node tertentu ada di baris matriks tersebut.
// - Undirected Graph: setiap edge dihitung dua kali (mat[i][j] dan mat[j][i]).

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Hitung degree (derajat) dari sebuah node dalam graph.
 * @param mat Adjacency matrix graph.
 * @param node Nomor node yang akan dihitung degree-nya.
 * @param V Jumlah total node dalam graph.
 * @return Jumlah edge yang terhubung dengan node tersebut.
 * @logic
 * 1. Inisialisasi derajat = 0.
 * 2. Iterasi melalui semua kolom (j) pada baris node.
 * 3. Jika mat[node][j] == 1, ada edge, tambah derajat.
 * 4. Kembalikan total derajat.
 */
int hitungDerajat(vector<vector<int>> mat, int node, int V) {
    int derajat = 0;
    // TODO: Lengkapi penghitungan derajat dengan loop.
    // ---- MULAI KODE DI SINI ----



    // ---- AKHIR KODE DI SINI ----
    return derajat;
}

int main() {
    vector<vector<int>> matrix = {{0, 1, 1}, {1, 0, 0}, {1, 0, 0}};
    cout << "Derajat Node 0: " << hitungDerajat(matrix, 0, 3);
    /* Harusnya output:
       Derajat Node 0: 2
    */
    return 0;
}
