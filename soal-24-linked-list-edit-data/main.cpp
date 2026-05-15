// # Latihan Soal 24: Singly Linked List (Update/Edit Data)
//
// ## Soal 24: Ubah Nilai Data pada Node Posisi Tertentu
//
// Kamu diminta melengkapi logika untuk menemukan node pada posisi ke-n,
// kemudian memperbarui nilai data-nya. Soal ini menggabungkan traversal
// linked list dengan pencarian posisi spesifik dan modifikasi data.
//
// Konsep Kunci:
// - Traversal dengan penghitung: bergerak sambil menghitung posisi node.
// - Posisi: urutan node dari head (mulai dari 1).
// - Update data: mengubah nilai field data pada node yang ditemukan.
// - Kondisi batas: memastikan posisi valid sebelum melakukan update.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

/**
 * @brief Ubah nilai data pada node di posisi tertentu.
 * @param head Pointer ke node pertama linked list.
 * @param posisi Posisi node yang akan diupdate (1-indexed).
 * @param dataBaru Nilai data baru yang akan disimpan.
 * @logic
 * 1. Inisialisasi temp = head dan hitung = 1.
 * 2. Traversal hingga posisi ditemukan atau temp == nullptr.
 * 3. Setiap iterasi: temp = temp->next, hitung++.
 * 4. Jika temp bukan nullptr saat hitung == posisi, update data.
 * 5. Jika hitung melebihi posisi atau temp nullptr, tidak ada update.
 */
void editData(Node* head, int posisi, int dataBaru) {
    Node* temp = head;
    int hitung = 1;
    // TODO: Lengkapi traversal hingga posisi ditemukan.
    // ---- MULAI KODE DI SINI ----




    // ---- AKHIR KODE DI SINI ----
    if (temp != nullptr) temp->data = dataBaru;
}

int main() {
    Node* head = new Node{10, new Node{20, new Node{30, nullptr}}};
    editData(head, 2, 99);
    cout << "Data node ke-2 sekarang: " << head->next->data;
    /* Harusnya output:
       Data node ke-2 sekarang: 99
    */
    return 0;
}
