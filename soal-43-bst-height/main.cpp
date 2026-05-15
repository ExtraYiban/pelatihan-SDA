// # Latihan Soal 43: Binary Search Tree (Height of Tree)
//
// ## Soal 43: Hitung Tinggi Pohon Secara Rekursif
//
// Kamu diminta melengkapi fungsi rekursif untuk menentukan tinggi tree,
// yaitu panjang jalur terpanjang dari root ke leaf. Pada soal ini, tinggi
// dihitung berdasarkan jumlah edge.
//
// Konsep Kunci:
// - Height by edge: tree kosong bernilai -1.
// - Rekursi: tinggi node = 1 + max(tinggi kiri, tinggi kanan).
// - Base case: node nullptr.
// - Struktur pohon: jalur terpanjang menentukan tinggi.

#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Hitung tinggi tree berbasis jumlah edge.
 * @param node Pointer ke node saat ini.
 * @return Tinggi tree.
 * @logic
 * 1. Jika node nullptr, return -1.
 * 2. Hitung tinggi kiri dan kanan secara rekursif.
 * 3. Ambil nilai maksimum dan tambah 1.
 */
int getTreeHeight(Node* node) {
    // TODO: Lengkapi logika rekursif perhitungan tinggi.
    // ---- MULAI KODE DI SINI ----




    // ---- AKHIR KODE DI SINI ----
}

int main() {
    Node* root = new Node{50, new Node{30, nullptr, nullptr}, nullptr};
    cout << "Tinggi Tree: " << getTreeHeight(root);
    /* Harusnya output:
       Tinggi Tree: 1
    */
    return 0;
}
