// # Latihan Soal 33: Queue (Reset Otomatis Saat Kosong)
//
// ## Soal 33: Implementasi Dequeue dengan Reset Indeks Otomatis
//
// Kamu diminta melengkapi logika untuk me-reset front dan rear kembali ke -1
// ketika semua elemen telah di-dequeue, sehingga queue siap untuk enqueue
// elemen baru.
//
// Konsep Kunci:
// - Queue kosong: front > rear atau kedua indeks = -1.
// - Reset: ketika front > rear, tandakan queue kosong dengan -1.
// - FIFO: elemen yang keluar adalah yang paling awal masuk.
// - Dequeue: increment front, bukan decrement rear.

#include <iostream>
#define MAX 5
using namespace std;

int q[MAX];
int front = 0, rear = -1;

/**
 * @brief Ambil elemen dari depan queue.
 * @logic
 * 1. Jika front > rear, queue kosong, cetak pesan.
 * 2. Jika ada elemen, cetak dan increment front.
 * 3. Setelah dequeue, jika front > rear, reset kedua indeks ke -1.
 * 4. Ini mempersiapkan queue untuk menerima elemen baru.
 */
void dequeue() {
    if (front > rear) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Keluar: " << q[front++] << endl;
        // TODO: Lengkapi logika reset indeks saat queue kosong.
        // ---- MULAI KODE DI SINI ----

        // ---- AKHIR KODE DI SINI ----
    }
}

/**
 * @brief Tambah elemen ke belakang queue.
 * @param nilai Nilai yang akan ditambahkan.
 */
void enqueue(int nilai) {
    if (rear == MAX - 1) {
        cout << "Queue penuh!" << endl;
    } else {
        if (front == -1) front = 0;
        q[++rear] = nilai;
    }
}

int main() {
    enqueue(50);
    dequeue();
    cout << "Status front sekarang: " << front << ", rear: " << rear;
    /* Harusnya output:
       Keluar: 50
       Status front sekarang: -1, rear: -1
    */
    return 0;
}
