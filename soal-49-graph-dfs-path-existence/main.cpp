// # Latihan Soal 49: Graph (Checking Path Existence)
//
// ## Soal 49: Cek Ketersediaan Jalur Antar Vertex dengan DFS
//
// Kamu diminta melengkapi pemanggilan rekursif DFS untuk memeriksa apakah
// terdapat jalur dari vertex start ke vertex end pada graph.
//
// Konsep Kunci:
// - DFS rekursif: telusuri tetangga sedalam mungkin.
// - Visited array: mencegah siklus tak berujung.
// - Path existence: true jika end dapat dicapai dari start.
// - Backtracking alami: jika cabang gagal, coba cabang lain.

#include <iostream>
#include <vector>
#include <list>
using namespace std;

/**
 * @brief Periksa apakah ada jalur dari start ke end.
 * @param adj Adjacency list graph.
 * @param start Vertex awal.
 * @param end Vertex tujuan.
 * @param visited Penanda vertex yang sudah dikunjungi.
 * @return true jika jalur ada, false jika tidak.
 */
bool hasPath(vector<list<int>> &adj, int start, int end, vector<bool> &visited) {
    if (start == end) return true;
    visited[start] = true;

    // TODO: Lengkapi rekursi DFS untuk tetangga yang belum dikunjungi.
    // ---- MULAI KODE DI SINI ----





    // ---- AKHIR KODE DI SINI ----
    return false;
}

int main() {
    int V = 4;
    vector<list<int>> adj(V);
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);

    vector<bool> visited(V, false);
    cout << "Ada jalur 0 ke 3: " << (hasPath(adj, 0, 3, visited) ? "Ya" : "Tidak");
    /* Harusnya output:
       Ada jalur 0 ke 3: Ya
    */
    return 0;
}
