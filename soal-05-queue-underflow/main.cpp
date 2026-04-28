/*
Latihan Soal 5: Queue (Prinsip FIFO)

Kamu diminta membuat fungsi dequeue untuk menghapus elemen paling depan pada
queue sederhana. Soal ini juga harus menangani kondisi underflow ketika queue
kosong.

Tugas:
- Lengkapi fungsi dequeue agar data keluar sesuai urutan FIFO.
- Tangani kondisi underflow jika queue sudah kosong.

Petunjuk:
1. Jika front sudah melewati rear, berarti queue kosong.
2. Ambil nilai queueData[front], lalu front bertambah satu.
3. Kembalikan -1 saat underflow.
*/

#include <iostream>
using namespace std;

int queueData[2] = {100, 200};
int front = 0, rear = 1;

// Soal 5: hapus elemen terdepan queue dan tangani underflow.
int dequeue() {
    // TODO: kembalikan elemen paling depan queue dan naikkan front.
    // Hint: jika front > rear, queue sedang underflow.
    return -1;
}

int main() {
    cout << "Data keluar: " << dequeue() << endl;
    cout << "Data keluar: " << dequeue() << endl;
    cout << "Data keluar: " << dequeue() << endl;
    return 0;
}
