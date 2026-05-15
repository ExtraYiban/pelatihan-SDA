// # Latihan Soal 41: Circular Double Linked List (Delete Head)
//
// ## Soal 41: Hapus Head pada Circular Double Linked List
//
// Kamu diminta melengkapi logika penghapusan node head pada circular double
// linked list agar koneksi dua arah tetap valid. Setelah head dihapus, tail
// harus tetap terhubung ke head baru dan head baru harus menunjuk kembali
// ke tail.
//
// Konsep Kunci:
// - Circular DLL: node terakhir terhubung ke node pertama.
// - Pointer dua arah: update next dan prev secara konsisten.
// - Kasus khusus: list berisi 1 node.
// - Keamanan memori: node lama dihapus dengan delete.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

/**
 * @brief Hapus node head pada circular double linked list.
 * @param head Reference pointer ke head.
 * @param tail Reference pointer ke tail.
 * @logic
 * 1. Jika list kosong, return.
 * 2. Simpan head lama di temp.
 * 3. Jika hanya satu node, set head dan tail ke nullptr.
 * 4. Jika lebih dari satu node, pindahkan head ke node berikutnya.
 * 5. Sambungkan head baru dan tail agar tetap sirkular.
 * 6. Hapus node lama.
 */
void deleteHeadCircular(Node *&head, Node *&tail) {
    if (head == nullptr) return;
    Node *temp = head;
    if (head == tail) {
        head = tail = nullptr;
    } else {
        // TODO: Lengkapi penyambungan head baru dengan tail.
        // ---- MULAI KODE DI SINI ----

        // ---- AKHIR KODE DI SINI ----
    }
    delete temp;
}

int main() {
    Node *head = new Node{10, nullptr, nullptr};
    Node *tail = head;
    head->next = head;
    head->prev = head;

    deleteHeadCircular(head, tail);
    if (head == nullptr) cout << "Berhasil menghapus node tunggal sirkular.";
    /* Harusnya output:
       Berhasil menghapus node tunggal sirkular.
    */
    return 0;
}
