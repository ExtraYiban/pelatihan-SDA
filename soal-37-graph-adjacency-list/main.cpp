// # Latihan Soal 37: Graph (Representasi Adjacency List dengan Vector)
//
// ## Soal 37: Tambahkan Edge Directed pada Adjacency List
//
// Kamu diminta melengkapi fungsi untuk menambahkan sisi (edge) satu arah pada
// graph directed. Representasi adjacency list menggunakan vector of vectors,
// yang lebih fleksibel dibanding matrix untuk graph sparse.
//
// Konsep Kunci:
// - Adjacency List: array of list untuk menyimpan tetangga setiap vertex.
// - Directed Graph: edge hanya satu arah (u -> v, tidak v -> u).
// - Vector of Vectors: adj[u] berisi daftar vertex yang terhubung dari u.
// - Sparse vs Dense: adjacency list lebih efisien untuk sparse graph.

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Tambahkan edge satu arah pada directed graph.
 * @param adj Adjacency list (vector of vectors).
 * @param u Vertex sumber.
 * @param v Vertex tujuan.
 * @logic
 * 1. Hanya tambahkan v ke list u (satu arah).
 * 2. Tidak tambahkan u ke list v (berbeda dengan undirected).
 * 3. Gunakan push_back untuk menambahkan tetangga.
 */
void addDirectedEdge(vector<vector<int>> &adj, int u, int v) {
    // TODO: Lengkapi penambahan edge satu arah.
    // ---- MULAI KODE DI SINI ----
    adj[u].push_back(v);
    // ---- AKHIR KODE DI SINI ----
}

int main() {
    vector<vector<int>> adj(3);
    addDirectedEdge(adj, 0, 1);
    addDirectedEdge(adj, 1, 2);
    addDirectedEdge(adj, 0, 2);
    
    cout << "Node 0 terhubung ke: ";
    for (int neighbor : adj[0]) {
        cout << neighbor << " ";
    }
    /* Harusnya output:
       Node 0 terhubung ke: 1 2 
    */
    return 0;
}
