// # Latihan Soal 44: Graph (Indegree of Directed Graph)
//
// ## Soal 44: Hitung Indegree Vertex pada Adjacency Matrix
//
// Kamu diminta melengkapi loop untuk menghitung jumlah edge yang masuk
// ke sebuah vertex pada directed graph. Indegree dihitung dari kolom
// vertex tersebut di adjacency matrix.
//
// Konsep Kunci:
// - Directed graph: edge memiliki arah u -> v.
// - Indegree: jumlah edge yang masuk ke vertex.
// - Adjacency matrix: indegree vertex v dihitung dari kolom v.
// - Iterasi baris: periksa semua i pada adj[i][vertex].

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Hitung indegree sebuah vertex pada directed graph.
 * @param adj Adjacency matrix.
 * @param vertex Vertex target.
 * @param V Jumlah vertex.
 * @return Jumlah indegree vertex.
 * @logic
 * 1. Inisialisasi count = 0.
 * 2. Loop i dari 0 sampai V-1.
 * 3. Jika adj[i][vertex] == 1, increment count.
 * 4. Return count.
 */
int hitungIndegree(vector<vector<int>> &adj, int vertex, int V) {
    int count = 0;
    // TODO: Lengkapi loop penghitung indegree.
    // ---- MULAI KODE DI SINI ----



    // ---- AKHIR KODE DI SINI ----
    return count;
}

int main() {
    vector<vector<int>> matrix = {{0, 1, 0}, {0, 0, 0}, {0, 1, 0}};
    cout << "Indegree Vertex 1: " << hitungIndegree(matrix, 1, 3);
    /* Harusnya output:
       Indegree Vertex 1: 2
    */
    return 0;
}
