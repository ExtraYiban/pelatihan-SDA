/*
Latihan Soal 3: Struct & Arrow Operator

Kamu diminta mengisi data sebuah struct melalui pointer. Soal ini melatih
penggunaan arrow operator (->) untuk mengakses anggota struct dari pointer.

Tugas:
- Lengkapi fungsi inputData agar data mahasiswa terisi dengan benar.
- Gunakan arrow operator untuk mengisi nama dan nim.

Petunjuk:
1. Parameter m adalah pointer ke struct Mahasiswa.
2. Gunakan m->nama untuk mengisi nama.
3. Gunakan m->nim untuk mengisi nomor induk mahasiswa.
*/

#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
};

// Soal 3: isi data struct melalui pointer dengan arrow operator (->).
void inputData(Mahasiswa *m, string namaBaru, int nimBaru) {
    // TODO: isi atribut nama dan nim melalui pointer m.
    // Hint: gunakan operator ->.
}

int main() {
    Mahasiswa mhs1;
    inputData(&mhs1, "Andi", 220910);
    cout << "Data Mahasiswa: " << mhs1.nama << " (" << mhs1.nim << ")" << endl;
    return 0;
}
