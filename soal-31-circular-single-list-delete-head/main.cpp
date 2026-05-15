// # Latihan Soal 31: Circular Single Linked List (Hapus Head)
//
// ## Soal 31: Hapus Node Head pada Circular Single Linked List
//
// Kamu diminta melengkapi logika untuk menemukan node terakhir dalam circular
// single linked list, sehingga bisa menunjuk ke head yang baru setelah penghapusan.
// Soal ini menggabungkan traversal dan manipulasi pointer pada struktur sirkular.
//
// Konsep Kunci:
// - Circular List: last->next menunjuk ke head, bukan nullptr.
// - Traversal Sirkular: loop berhenti saat last->next == head (bukan nullptr).
// - Update pointer: setelah mengganti head, pointer last harus menunjuk ke head baru.
// - Memory management: deallocate old head setelah update selesai.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

/**
 * @brief Hapus node head pada circular single linked list.
 * @param head Reference ke pointer head (bisa berubah).
 * @logic
 * 1. Jika head nullptr, tidak ada yang dihapus.
 * 2. Cari node terakhir dengan loop: while (last->next != head).
 * 3. Jika head == last, hanya satu node, set head = nullptr.
 * 4. Jika ada lebih dari satu node:
 *    a. Update head ke head->next.
 *    b. Hubungkan last->next ke head baru.
 *    c. Deallocate old head.
 */
void hapusHeadCircular(Node*& head) {
    if (head == nullptr) return;
    Node* temp = head;
    Node* last = head;

    // TODO: Lengkapi logika pencarian node terakhir.
    // ---- MULAI KODE DI SINI ----

    // ---- AKHIR KODE DI SINI ----

    if (head == last) {
        delete head;
        head = nullptr;
    } else {
        head = head->next;
        last->next = head;
        delete temp;
    }
}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = head;
    hapusHeadCircular(head);
    if (head == nullptr) cout << "Node berhasil dihapus dan list kosong.";
    /* Harusnya output:
       Node berhasil dihapus dan list kosong.
    */
    return 0;
}
