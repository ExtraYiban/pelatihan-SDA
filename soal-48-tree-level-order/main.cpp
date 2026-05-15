// # Latihan Soal 48: Tree (Breadth-First Search Traversal)
//
// ## Soal 48: Traversal Level Order Menggunakan Queue
//
// Kamu diminta melengkapi urutan memasukkan anak kiri dan kanan ke queue
// untuk traversal tree secara level demi level (BFS).
//
// Konsep Kunci:
// - BFS tree: kunjungi node per level dari atas ke bawah.
// - Queue: struktur utama untuk level-order traversal.
// - Urutan anak: kiri dulu, lalu kanan.
// - Basis: jika root nullptr, traversal selesai.

#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

/**
 * @brief Cetak node tree dengan traversal level-order.
 * @param root Pointer ke root tree.
 */
void levelOrder(Node* root) {
    if (root == nullptr) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";

        // TODO: Lengkapi input anak kiri dan kanan ke queue.
        // ---- MULAI KODE DI SINI ----


        // ---- AKHIR KODE DI SINI ----
    }
}

int main() {
    Node* root = new Node{1,
        new Node{2, nullptr, nullptr},
        new Node{3, nullptr, nullptr}
    };

    cout << "Level order: ";
    levelOrder(root);
    /* Harusnya output:
       Level order: 1 2 3 
    */
    return 0;
}
