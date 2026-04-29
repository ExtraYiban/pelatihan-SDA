// # Latihan Soal 46: Quick Sort (Pivot Selection with Pointer)
//
// ## Soal 46: Partisi Quick Sort dengan Pointer Arithmetic
//
// Kamu diminta melengkapi pertukaran elemen menggunakan dereference pointer
// saat elemen lebih kecil dari pivot. Soal ini menekankan akses elemen array
// melalui alamat memori.
//
// Konsep Kunci:
// - Pointer arithmetic: *(arr + i) untuk akses elemen.
// - Pivot partition: elemen kecil ke kiri, besar ke kanan.
// - In-place swap: tukar langsung di array yang sama.
// - Quick Sort: divide and conquer berbasis partisi.

#include <iostream>
using namespace std;

/**
 * @brief Lakukan partisi array dengan pointer arithmetic.
 * @param arr Pointer ke array.
 * @param low Batas kiri.
 * @param high Batas kanan (pivot).
 * @return Posisi akhir pivot.
 */
int partitionPointer(int* arr, int low, int high) {
    int pivot = *(arr + high);
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (*(arr + j) < pivot) {
            i++;
            // TODO: Lengkapi swap dengan pointer.
            // ---- MULAI KODE DI SINI ----
            int temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
            // ---- AKHIR KODE DI SINI ----
        }
    }

    int temp = *(arr + i + 1);
    *(arr + i + 1) = *(arr + high);
    *(arr + high) = temp;
    return i + 1;
}

int main() {
    int data[] = {10, 80, 30, 90, 40};
    int pi = partitionPointer(data, 0, 4);
    cout << "Index partisi baru: " << pi;
    /* Harusnya output:
       Index partisi baru: 3
    */
    return 0;
}
