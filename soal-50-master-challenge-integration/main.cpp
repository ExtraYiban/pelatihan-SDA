// # Latihan Soal 50: The Master Challenge (System Integration)
//
// ## Soal 50: Integrasi Struct, BST, Stack, Pointer, dan Analisis Kompleksitas
//
// Kamu membangun sistem manajemen gudang: data barang disimpan pada BST
// berdasarkan id, aksi penghapusan dicatat ke stack untuk undo, lalu sistem
// menampilkan snapshot alamat memori node dengan id terendah.
//
// Konsep Kunci:
// - Struct: representasi data barang.
// - BST: penyimpanan terurut berdasarkan id.
// - Stack (LIFO): pencatatan undo operasi.
// - Pointer traversal: mencari node paling kiri (id terkecil).
// - Analisis kompleksitas: rata-rata O(log n), terburuk O(n).

#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Barang {
    int id;
    string nama;
    int stok;
};

struct Node {
    Barang data;
    Node *left, *right;
};

/**
 * @brief Tambahkan data barang ke BST berdasarkan id.
 * @param root Pointer root BST.
 * @param b Data barang.
 * @return Root BST setelah insert.
 * @logic
 * 1. Jika root nullptr, buat node baru.
 * 2. Jika b.id < root->data.id, insert ke kiri.
 * 3. Jika b.id > root->data.id, insert ke kanan.
 * 4. Jika id sama, abaikan (tidak insert duplikat).
 */
Node* tambahBarang(Node* root, Barang b) {
    if (root == nullptr) return new Node{b, nullptr, nullptr};

    // TODO: Lengkapi logika BST berdasarkan id.
    // ---- MULAI KODE DI SINI ----


    // ---- AKHIR KODE DI SINI ----

    return root;
}

/**
 * @brief Cari node dengan id terendah (node paling kiri).
 * @param root Pointer root BST.
 * @return Pointer ke node id terkecil.
 * @logic
 * Traversal pointer ke kiri selama curr->left masih ada.
 */
Node* getStokTerendah(Node* root) {
    Node* curr = root;

    // TODO: Lengkapi loop pointer untuk mencari node paling kiri.
    // ---- MULAI KODE DI SINI ----



    // ---- AKHIR KODE DI SINI ----

    return curr;
}

int main() {
    Node* gudang = nullptr;
    stack<int> undoStack;

    gudang = tambahBarang(gudang, {105, "Beras", 50});
    gudang = tambahBarang(gudang, {102, "Gula", 20});
    gudang = tambahBarang(gudang, {110, "Minyak", 15});

    // Simulasi penghapusan barang id 110 dicatat ke stack undo.
    undoStack.push(110);

    Node* minNode = getStokTerendah(gudang);

    if (minNode) {
        cout << "ID Terendah: " << minNode->data.id << endl;
        cout << "Alamat memori: " << &minNode->data << endl;
    }

    cout << "Top Undo Stack (ID terakhir dihapus): " << undoStack.top() << endl;
    cout << "Analisis kompleksitas pencarian BST (rata-rata): O(log n)" << endl;
    cout << "Analisis kompleksitas terburuk BST tidak seimbang: O(n)" << endl;

    /* Harusnya output (alamat memori bisa berbeda):
       ID Terendah: 102
       Alamat memori: 0x...
       Top Undo Stack (ID terakhir dihapus): 110
       Analisis kompleksitas pencarian BST (rata-rata): O(log n)
       Analisis kompleksitas terburuk BST tidak seimbang: O(n)
    */
    return 0;
}
