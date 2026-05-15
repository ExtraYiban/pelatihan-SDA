// # Latihan Soal 40: Merge Sort (Pointer-Based Merging)
//
// ## Soal 40: Implementasi Merge Phase dengan Pointer Arithmetic
//
// Kamu diminta melengkapi bagian penyalinan sisa elemen dari array sementara L
// ke array utama ketika semua elemen dari R sudah diproses. Soal ini menggabungkan
// konsep pointer arithmetic dengan logika divide-and-conquer.
//
// Konsep Kunci:
// - Pointer arithmetic: *(arr + i) equivalent dengan arr[i].
// - Merge logic: bandingkan elemen dari L dan R, salin yang lebih kecil.
// - Sisa elemen: setelah satu array habis, salin sisa array lainnya.
// - Divide-conquer: merge adalah tahap penggabungan setelah divide.

#include <iostream>
using namespace std;

/**
 * @brief Gabungkan dua sub-array terurut menggunakan pointer arithmetic.
 * @param arr Array utama yang menerima hasil merge.
 * @param L Sub-array kiri.
 * @param R Sub-array kanan.
 * @param n1 Ukuran sub-array L.
 * @param n2 Ukuran sub-array R.
 * @param left Indeks awal penulisan di arr.
 * @logic
 * 1. Inisialisasi i=0, j=0, k=left.
 * 2. Bandingkan *(L+i) dengan *(R+j):
 *    - Jika L[i] <= R[j], salin L[i] ke arr[k], naikkan i dan k.
 *    - Sebaliknya, salin R[j] ke arr[k], naikkan j dan k.
 * 3. Setelah salah satu array habis, salin sisa:
 *    - Loop sisa dari L: *(arr+k) = *(L+i), i++, k++.
 *    - Loop sisa dari R: *(arr+k) = *(R+j), j++, k++.
 */
void mergePointer(int* arr, int* L, int* R, int n1, int n2, int left) {
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (*(L + i) <= *(R + j)) {
            *(arr + k) = *(L + i);
            i++;
        } else {
            *(arr + k) = *(R + j);
            j++;
        }
        k++;
    }
    // TODO: Lengkapi penyalinan sisa elemen dari L dan R.
    // ---- MULAI KODE DI SINI ----

    // ---- AKHIR KODE DI SINI ----
}

int main() {
    int data[4] = {0, 0, 0, 0};
    int L[] = {10, 30};
    int R[] = {20, 40};
    mergePointer(data, L, R, 2, 2, 0);
    
    cout << "Hasil merge: ";
    for (int x : data) cout << x << " ";
    /* Harusnya output:
       Hasil merge: 10 20 30 40 
    */
    return 0;
}
