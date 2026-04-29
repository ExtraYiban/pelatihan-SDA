// # Latihan Soal 47: Double Linked List (Priority Insert)
//
// ## Soal 47: Sisipkan Node ke DLL Terurut (Ascending)
//
// Kamu diminta melengkapi kondisi traversal agar node baru disisipkan pada
// posisi yang tepat dalam double linked list yang sudah terurut menaik.
//
// Konsep Kunci:
// - Sorted insert: mempertahankan urutan ascending.
// - Traversal stop: berhenti saat nilai curr tidak lagi lebih kecil dari nilai baru.
// - Update pointer: prev dan next harus tetap konsisten.
// - Kasus khusus: insert di depan head.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

/**
 * @brief Sisipkan node ke DLL terurut ascending.
 * @param head Reference ke head list.
 * @param nilai Nilai node baru.
 */
void sortedInsertDLL(Node *&head, int nilai) {
    Node *newNode = new Node{nilai, nullptr, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }

    if (nilai <= head->data) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    Node *curr = head;
    // TODO: Lengkapi kondisi traversal hingga posisi sisip yang tepat.
    // ---- MULAI KODE DI SINI ----
    while (curr->next != nullptr && curr->next->data < nilai) {
        curr = curr->next;
    }
    // ---- AKHIR KODE DI SINI ----

    newNode->next = curr->next;
    newNode->prev = curr;
    if (curr->next != nullptr) curr->next->prev = newNode;
    curr->next = newNode;
}

int main() {
    Node *head = new Node{10, nullptr, nullptr};
    Node *n2 = new Node{30, nullptr, head};
    head->next = n2;

    sortedInsertDLL(head, 20);
    cout << "Urutan: " << head->data << " " << head->next->data << " " << head->next->next->data;
    /* Harusnya output:
       Urutan: 10 20 30
    */
    return 0;
}
