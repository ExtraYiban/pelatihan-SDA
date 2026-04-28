/*
Latihan Soal 6: Single Linked List (Add Last)

Kamu diminta menambahkan node di akhir single linked list. Untuk melakukannya,
harus dilakukan traversal dari head sampai node terakhir.

Tugas:
- Lengkapi bagian traversal agar node baru tersambung di bagian paling belakang.
- Pastikan node baru menjadi tail saat ditambahkan.

Petunjuk:
1. Jika head masih nullptr, node baru langsung menjadi head.
2. Jika list sudah ada isinya, bergerak terus sampai temp->next bernilai nullptr.
3. Sambungkan node terakhir ke node baru.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

// Soal 6: tambahkan node di akhir linked list dengan traversal ke tail.
void addLast(Node *&head, int dataBaru) {
    Node *newNode = new Node{dataBaru, nullptr};
    if (head == nullptr) {
        head = newNode;
    } else {
        // TODO: traversal sampai node terakhir, lalu sambungkan newNode.
        // Hint: cari node yang next-nya bernilai nullptr.
    }
}

int main() {
    Node *head = nullptr;
    addLast(head, 10);
    addLast(head, 20);
    cout << "Node pertama: " << head->data << ", Node kedua: " << head->next->data;
    return 0;
}
