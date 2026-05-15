// # Latihan Soal 29: Circular Double Linked List (Hubungan Head-Tail)
//
// ## Soal 29: Inisialisasi Hubungan Sirkular pada Double Linked List
//
// Kamu diminta melengkapi pengaitan pointer untuk membuat circular double
// linked list, di mana node pertama menunjuk ke dirinya sendiri secara dua
// arah. Soal ini menggabungkan konsep circular dan double linked list.
//
// Konsep Kunci:
// - Circular Double Linked List: kombinasi circular list dan double linked list.
// - Self-pointing: node menunjuk ke dirinya sendiri (next dan prev).
// - Head = Tail: dalam list dengan 1 node, head dan tail adalah node yang sama.
// - Dua arah: baik next maupun prev harus menunjuk ke node itu sendiri.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

/**
 * @brief Buat node awal untuk circular double linked list.
 * @param val Data yang akan disimpan di node baru.
 * @return Pointer ke node yang telah diinisialisasi dengan hubungan sirkular.
 * @logic
 * 1. Alokasi memori untuk node baru.
 * 2. Set data node dengan val.
 * 3. Set next pointer ke node itu sendiri.
 * 4. Set prev pointer ke node itu sendiri.
 * 5. Kembalikan pointer node.
 */
Node* buatListBaru(int val) {
    Node* newNode = new Node{val, nullptr, nullptr};
    // TODO: Lengkapi hubungan sirkular dua arah (next dan prev).
    // ---- MULAI KODE DI SINI ----


    // ---- AKHIR KODE DI SINI ----
    return newNode;
}

int main() {
    Node* head = buatListBaru(100);
    if (head->next == head && head->prev == head) 
        cout << "Circular Double Linked List berhasil diinisialisasi.";
    /* Harusnya output:
       Circular Double Linked List berhasil diinisialisasi.
    */
    return 0;
}
