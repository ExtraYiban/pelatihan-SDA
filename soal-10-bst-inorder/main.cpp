/*
Latihan Soal 10: Binary Search Tree (BST)

Kamu diminta melengkapi traversal in-order pada pohon biner pencarian. Traversal
ini harus mengikuti urutan kiri, root, lalu kanan.

Tugas:
- Lengkapi fungsi inorder agar hasil traversal sesuai urutan in-order.
- Gunakan rekursi untuk mengunjungi subtree kiri dan kanan.

Petunjuk:
1. Jika root bernilai nullptr, hentikan rekursi.
2. Kunjungi subtree kiri terlebih dahulu.
3. Cetak data root.
4. Lanjutkan ke subtree kanan.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

// Soal 10: traversal BST in-order dengan urutan kiri, root, kanan.
void inorder(Node *root) {
    // TODO: lakukan traversal in-order dengan urutan kiri, root, kanan.
    // Hint: rekursi ke left, cetak data, lalu rekursi ke right.
}

int main() {
    Node *root = new Node{50, nullptr, nullptr};
    root->left = new Node{30, nullptr, nullptr};
    root->right = new Node{70, nullptr, nullptr};

    cout << "In-order Traversal: ";
    inorder(root);
    return 0;
}
