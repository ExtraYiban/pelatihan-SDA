/*
Latihan Soal 9: Sorting (Insertion Sort)

Kamu diminta melengkapi proses insertion sort dengan mekanisme shifting elemen
ke kanan sampai posisi yang tepat ditemukan.

Tugas:
- Lengkapi bagian pergeseran elemen pada fungsi insertionSort.
- Pastikan elemen yang lebih besar dari key digeser satu langkah ke kanan.

Petunjuk:
1. Simpan elemen yang sedang dibandingkan di variabel key.
2. Gunakan j untuk bergerak mundur selama elemen lebih besar dari key.
3. Setelah pergeseran selesai, taruh key di posisi j + 1.
*/

#include <iostream>
using namespace std;

// Soal 9: geser elemen ke kanan sampai posisi key tepat.
void insertionSort(int arr[], int n) {
    // TODO: lakukan insertion sort dengan shifting elemen ke kanan.
    // Hint: bandingkan key dengan elemen di sebelah kirinya.
}

int main() {
    int data[] = {5, 2, 4, 1, 3};
    insertionSort(data, 5);
    for (int x : data) cout << x << " ";
    return 0;
}
