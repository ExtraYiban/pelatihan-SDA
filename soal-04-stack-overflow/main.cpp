/*
Latihan Soal 4: Stack (Prinsip LIFO)

Kamu diminta melengkapi operasi push pada stack sederhana. Stack ini memiliki
batas kapasitas, jadi program juga harus menangani kondisi overflow.

Tugas:
- Lengkapi fungsi push agar bisa menambah data dengan benar.
- Tangani kondisi overflow saat stack sudah penuh.

Petunjuk:
1. Jika top sudah berada di batas maksimum, tampilkan pesan overflow.
2. Jika masih ada ruang, naikkan top lalu simpan value ke stack[top].
3. Cetak pesan sukses saat data berhasil dimasukkan.
*/

#include <iostream>
#define MAX 3
using namespace std;

int stack[MAX];
int top = -1;

// Soal 4: implementasikan push dan tangani overflow saat stack penuh.
void push(int value) {
    // TODO: cek overflow, lalu simpan value ke stack jika masih ada ruang.
    // Hint: perbarui top sebelum menulis ke stack[top].
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    return 0;
}
