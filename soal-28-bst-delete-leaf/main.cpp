// # Latihan Soal 28: Binary Search Tree (Penghapusan Node Daun)
//
// ## Soal 28: Hapus Node Daun (Leaf) pada Binary Search Tree
//
// Kamu diminta melengkapi logika penghapusan ketika node yang dicari ditemukan
// dan tidak memiliki anak (leaf node). Soal ini melatih manajemen memori dan
// pemahaman struktur BST dalam operasi delete.
//
// Konsep Kunci:
// - Node Daun (Leaf): node tanpa anak kiri maupun anak kanan.
// - Kasus hapus sederhana: menghapus leaf node langsung (deallocate).
// - Recursive Delete: mencari node terlebih dahulu, baru hapus.
// - Memory management: gunakan delete untuk membebaskan memori.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Hapus node dengan nilai tertentu dari BST.
 * @param root Pointer ke root node BST.
 * @param val Nilai node yang akan dihapus.
 * @return Root node BST (mungkin berubah jika root yang dihapus).
 * @logic
 * 1. Jika root nullptr, return nullptr.
 * 2. Jika val < root->data, rekursi ke left subtree.
 * 3. Jika val > root->data, rekursi ke right subtree.
 * 4. Jika val == root->data dan node adalah leaf (tidak ada anak).
 * 5. Deallocate root dan return nullptr.
 */
Node* hapusNode(Node* root, int val) {
    if (root == nullptr) return root;
    if (val < root->data) root->left = hapusNode(root->left, val);
    else if (val > root->data) root->right = hapusNode(root->right, val);
    else {
        // TODO: Lengkapi kasus penghapusan node daun.
        // ---- MULAI KODE DI SINI ----




        // ---- AKHIR KODE DI SINI ----
    }
    return root;
}

int main() {
    Node* root = new Node{50, nullptr, nullptr};
    root = hapusNode(root, 50);
    if (root == nullptr) cout << "Node 50 berhasil dihapus.";
    /* Harusnya output:
       Node 50 berhasil dihapus.
    */
    return 0;
}
