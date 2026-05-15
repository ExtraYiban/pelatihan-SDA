// # Latihan Soal 26: Double Linked List (Reverse Traversal)
//
// ## Soal 26: Tampilkan Data Double Linked List dari Belakang ke Depan
//
// Kamu diminta melengkapi loop untuk menampilkan semua node dalam urutan
// terbalik dengan memanfaatkan pointer `prev` dari setiap node. Soal ini
// menunjukkan keunggulan double linked list dalam melakukan traversal
// dua arah.
//
// Konsep Kunci:
// - Prev pointer: menunjuk ke node sebelumnya dalam double linked list.
// - Reverse traversal: bergerak dari tail ke head menggunakan prev.
// - Tail: node terakhir dalam double linked list (biasanya tail->next == nullptr).
// - Forward vs backward: double linked list bisa ditraversal dua arah.

#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next, *prev;
};

/**
 * @brief Tampilkan semua elemen double linked list dari belakang ke depan.
 * @param tail Pointer ke node terakhir (tail) double linked list.
 * @logic
 * 1. Inisialisasi temp = tail.
 * 2. Selama temp tidak nullptr, cetak temp->val.
 * 3. Pindahkan temp ke node sebelumnya: temp = temp->prev.
 * 4. Lanjutkan hingga mencapai node pertama (prev == nullptr).
 */
void cetakTerbalik(Node* tail) {
    Node* temp = tail;
    cout << "Data dari belakang: ";
    // TODO: Lengkapi traversal mundur menggunakan prev pointer.
    // ---- MULAI KODE DI SINI ----




    // ---- AKHIR KODE DI SINI ----
    cout << endl;
}

int main() {
    Node* n1 = new Node{10, nullptr, nullptr};
    Node* n2 = new Node{20, nullptr, n1};
    Node* n3 = new Node{30, nullptr, n2};
    n1->next = n2;
    n2->next = n3;
    
    cetakTerbalik(n3);
    /* Harusnya output:
       Data dari belakang: 30 20 10 
    */
    return 0;
}
