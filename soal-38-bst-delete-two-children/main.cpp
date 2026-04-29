// # Latihan Soal 38: Binary Search Tree (Delete Node dengan 2 Anak)
//
// ## Soal 38: Hapus Node dengan Dua Anak pada BST
//
// Kamu diminta melengkapi logika penghapusan node yang memiliki dua anak dengan
// menggunakan in-order successor (nilai terkecil dari right subtree). Soal ini
// melatih pemahaman tentang penggantian nilai tanpa merusak BST property.
//
// Konsep Kunci:
// - In-order Successor: node terkecil di right subtree.
// - Penggantian nilai: copy successor ke node yang dihapus, lalu hapus successor.
// - Rekursi: hapus successor secara rekursif dari right subtree.
// - BST property: terjaga karena successor adalah nilai terkecil > node.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Temukan node dengan nilai minimum dalam BST.
 * @param node Pointer ke node untuk mulai pencarian.
 * @return Pointer ke node dengan nilai terkecil.
 * @logic
 * Terus bergerak ke left sampai left == nullptr.
 */
Node* findMin(Node* node) {
    while (node->left != nullptr) node = node->left;
    return node;
}

/**
 * @brief Hapus node dengan nilai tertentu dari BST.
 * @param root Pointer ke root node.
 * @param val Nilai node yang akan dihapus.
 * @return Root node BST setelah penghapusan.
 * @logic
 * 1. Cari node yang akan dihapus secara rekursif.
 * 2. Jika node memiliki 2 anak:
 *    a. Temukan in-order successor (nilai terkecil di right subtree).
 *    b. Copy data successor ke node yang akan dihapus.
 *    c. Hapus successor secara rekursif dari right subtree.
 */
Node* hapusBST(Node* root, int val) {
    if (root == nullptr) return root;
    if (val < root->data) root->left = hapusBST(root->left, val);
    else if (val > root->data) root->right = hapusBST(root->right, val);
    else {
        if (root->left != nullptr && root->right != nullptr) {
            Node* temp = findMin(root->right);
            // TODO: Lengkapi penyalinan data dari successor ke node yang dihapus.
            // ---- MULAI KODE DI SINI ----
            root->data = temp->data;
            root->right = hapusBST(root->right, temp->data);
            // ---- AKHIR KODE DI SINI ----
        }
    }
    return root;
}

int main() {
    Node* root = new Node{50, 
        new Node{30, nullptr, nullptr}, 
        new Node{70, nullptr, nullptr}
    };
    root = hapusBST(root, 50);
    cout << "Root baru setelah hapus 50: " << root->data;
    /* Harusnya output:
       Root baru setelah hapus 50: 70
    */
    return 0;
}
