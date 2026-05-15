// # Latihan Soal 32: Double Linked List (Insert di Posisi Spesifik)
//
// ## Soal 32: Sisipkan Node di Posisi Tertentu pada Double Linked List
//
// Kamu diminta melengkapi perulangan untuk berhenti tepat sebelum posisi yang
// diinginkan, sehingga penyisipan bisa dilakukan dengan menjaga integritas
// pointer prev dan next.
//
// Konsep Kunci:
// - Traversal dengan kondisi: loop berhenti di posisi - 1.
// - Update 4 pointer: newNode->prev, newNode->next, temp->next->prev, temp->next.
// - Null checking: verifikasi temp->next bukan nullptr sebelum update.
// - Position-based insertion: logika berbeda jika insert di awal atau tengah.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

/**
 * @brief Sisipkan node di posisi tertentu pada double linked list.
 * @param head Pointer ke node pertama.
 * @param posisi Posisi untuk penyisipan (1-indexed, 1 = di depan head).
 * @param nilai Nilai data node baru.
 * @logic
 * 1. Inisialisasi temp = head.
 * 2. Traversal hingga posisi - 1: loop (i < posisi - 1).
 * 3. Cek temp != nullptr untuk memastikan posisi valid.
 * 4. Jika valid, buat newNode dan update 4 pointer.
 * 5. Jika temp->next tidak nullptr, update prev pointer dari node sesudah.
 */
void insertTengah(Node* head, int posisi, int nilai) {
    Node* temp = head;
    // TODO: Lengkapi loop traversal hingga posisi - 1.
    // ---- MULAI KODE DI SINI ----

    // ---- AKHIR KODE DI SINI ----
    if (temp != nullptr) {
        Node* newNode = new Node{nilai, temp->next, temp};
        if (temp->next != nullptr) temp->next->prev = newNode;
        temp->next = newNode;
    }
}

int main() {
    Node* n1 = new Node{10, nullptr, nullptr};
    Node* n2 = new Node{30, nullptr, n1};
    n1->next = n2;
    
    insertTengah(n1, 2, 20);
    cout << "Urutan: " << n1->data << " " << n1->next->data << " " << n1->next->next->data;
    /* Harusnya output:
       Urutan: 10 20 30
    */
    return 0;
}
