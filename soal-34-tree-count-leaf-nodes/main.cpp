// # Latihan Soal 34: Tree (Menghitung Jumlah Daun/Leaf Nodes)
//
// ## Soal 34: Hitung Total Leaf Nodes dalam Binary Tree
//
// Kamu diminta melengkapi kondisi untuk mendeteksi apakah suatu node adalah
// leaf node (tidak memiliki anak), kemudian menggunakan rekursi untuk menjumlahkan
// seluruh leaf nodes di pohon.
//
// Konsep Kunci:
// - Leaf node: node tanpa anak kiri dan anak kanan.
// - Rekursi base case: jika root nullptr, return 0.
// - Rekursi case: jika leaf, return 1; else lanjutkan rekursi ke subpohon.
// - Inorder counting: jumlahkan hasil rekursi left dan right.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Hitung jumlah leaf nodes dalam binary tree.
 * @param root Pointer ke root node tree.
 * @return Jumlah total leaf nodes di tree.
 * @logic
 * 1. Jika root nullptr, tidak ada leaf, return 0.
 * 2. Jika node adalah leaf (left == nullptr && right == nullptr), return 1.
 * 3. Jika bukan leaf, rekursi ke left dan right, jumlahkan hasilnya.
 */
int hitungLeaf(Node* root) {
    if (root == nullptr) return 0;
    // TODO: Lengkapi kondisi untuk mendeteksi leaf node.
    // ---- MULAI KODE DI SINI ----

    // ---- AKHIR KODE DI SINI ----
    return hitungLeaf(root->left) + hitungLeaf(root->right);
}

int main() {
    Node* root = new Node{1, 
        new Node{2, nullptr, nullptr}, 
        new Node{3, nullptr, nullptr}
    };
    cout << "Jumlah daun (leaf): " << hitungLeaf(root);
    /* Harusnya output:
       Jumlah daun (leaf): 2
    */
    return 0;
}
