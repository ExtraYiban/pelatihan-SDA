// # Latihan Soal 35: Quick Sort (Pemilihan Pivot & Partisi)
//
// ## Soal 35: Implementasi Partisi Array pada Quick Sort
//
// Kamu diminta melengkapi logika perbandingan untuk memastikan elemen yang
// lebih kecil dari pivot berpindah ke sisi kiri dan lebih besar ke sisi kanan.
// Soal ini melatih pemahaman tentang divide-and-conquer strategy.
//
// Konsep Kunci:
// - Pivot: elemen pembagi array (biasanya elemen terakhir).
// - Partisi: menyusun elemen sehingga yang < pivot di kiri, > pivot di kanan.
// - Swap: menukar posisi dua elemen dalam array.
// - In-place sorting: pengurutan dilakukan langsung pada array asli.

#include <iostream>
using namespace std;

/**
 * @brief Partisi array dengan pivot sebagai elemen terakhir.
 * @param arr Array yang akan dipartisi.
 * @param low Indeks awal partisi.
 * @param high Indeks akhir partisi (pivot).
 * @return Indeks baru dari pivot setelah partisi.
 * @logic
 * 1. Pilih pivot = arr[high].
 * 2. Inisialisasi i = low - 1.
 * 3. Iterasi j dari low hingga high - 1.
 * 4. Jika arr[j] < pivot, naikkan i dan swap arr[i] dengan arr[j].
 * 5. Setelah loop, swap arr[i+1] dengan pivot.
 * 6. Return i + 1 sebagai posisi pivot yang benar.
 */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        // TODO: Lengkapi kondisi perbandingan dengan pivot.
        // ---- MULAI KODE DI SINI ----




        // ---- AKHIR KODE DI SINI ----
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int main() {
    int data[] = {10, 80, 30, 90, 40};
    int pi = partition(data, 0, 4);
    cout << "Indeks pivot baru: " << pi;
    /* Harusnya output:
       Indeks pivot baru: 2
    */
    return 0;
}
