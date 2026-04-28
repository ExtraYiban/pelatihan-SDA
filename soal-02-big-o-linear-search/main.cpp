/*
Latihan Soal 2: Algorithm Complexity (Big-O Analysis)

Kamu diminta membuat fungsi pencarian linear untuk mencari sebuah nilai di dalam
array. Setelah itu, pahami kompleksitas waktunya.

Tugas:
- Lengkapi logika traversal pada fungsi cariLinear.
- Tentukan kompleksitas waktu pencarian linear.

Petunjuk:
1. Telusuri elemen array dari indeks 0 sampai n - 1.
2. Jika arr[i] sama dengan target, kembalikan true.
3. Jika tidak ada yang cocok, kembalikan false.
*/

#include <iostream>
using namespace std;

// Soal 2: lengkapi pencarian linear dan pahami kompleksitas waktunya O(n).
bool cariLinear(int arr[], int n, int target) {
    // TODO: lakukan traversal array dan kembalikan true jika target ditemukan.
    // Hint: telusuri indeks 0 sampai n - 1.
    return false;
}

int main() {
    int data[] = {12, 45, 7, 19, 22};
    int target = 19;
    if (cariLinear(data, 5, target)) cout << "Target ditemukan!";
    else cout << "Target tidak ditemukan.";
    return 0;
}

/*
ANALISIS:
Berdasarkan sumber, algoritma pencarian beruntun memiliki:
- Kompleksitas Waktu: O(n)
- Nama Kelompok: Lanjar (Linear)
*/
