/*
Latihan Soal 7: Double Linked List (Delete First)

Kamu diminta menghapus node pertama pada double linked list. Setelah node
pertama dihapus, pointer prev pada head baru harus diperbarui agar tidak
menunjuk ke node lama.

Tugas:
- Lengkapi fungsi deleteFirst agar penghapusan node pertama berjalan benar.
- Pastikan head baru memiliki prev bernilai nullptr.

Petunjuk:
1. Simpan head lama di variabel del sebelum dihapus.
2. Jika masih ada node setelah head, geser head ke node berikutnya.
3. Atur head->prev menjadi nullptr.
*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

// Soal 7: hapus node pertama dan perbarui pointer prev pada head baru.
void deleteFirst(Node *&head) {
    if (head == nullptr) return;
    Node *del = head;
    // TODO: geser head ke node berikutnya dan perbarui prev.
    // Hint: jika hanya ada satu node, head menjadi nullptr.
    delete del;
}

int main() {
    Node *n1 = new Node{10, nullptr, nullptr};
    Node *n2 = new Node{20, nullptr, n1};
    n1->next = n2;
    Node *head = n1;

    deleteFirst(head);
    cout << "Head baru: " << head->data;
    return 0;
}
