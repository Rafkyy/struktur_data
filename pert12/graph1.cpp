#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

const int INF = INT_MAX; // Mendefinisikan nilai tak hingga

typedef pair<int, int> pii; // Tipe data pasangan untuk menyimpan pasangan (node, berat)

vector<vector<pii>> adj; // Adjacency list untuk menyimpan graf

// Fungsi Dijkstra untuk menghitung jarak terpendek dari sumber ke semua node lainnya
vector<int> dijkstra(int src, int n) {
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Priority queue untuk memilih node dengan jarak terpendek
    vector<int> dist(n, INF); // Vektor untuk menyimpan jarak terpendek ke setiap node
    pq.push({0, src}); // Memasukkan sumber dengan jarak 0
    dist[src] = 0; // Jarak dari sumber ke dirinya sendiri adalah 0

    while (!pq.empty()) {
        int u = pq.top().second; // Mengambil node dengan jarak terpendek
        pq.pop(); // Menghapus node tersebut dari queue

        // Memeriksa semua tetangga dari node u
        for (auto &tetangga : adj[u]) {
            int v = tetangga.first; // Node tetangga
            int berat = tetangga.second; // Berat edge dari u ke v

            // Jika jalur baru lebih pendek, perbarui jarak dan masukkan ke queue
            if (dist[u] + berat < dist[v]) {
                dist[v] = dist[u] + berat;
                pq.push({dist[v], v});
            }
        }
    }

    return dist; // Mengembalikan jarak terpendek dari sumber ke semua node
}

int main() {
    int n = 9; // Jumlah node
    adj.resize(n); // Menyesuaikan ukuran adjacency list

    // Menambahkan edges dan bobotnya ke graf
    adj[0].push_back({1, 6});  // A -> B
    adj[0].push_back({2, 4});  // A -> C
    adj[1].push_back({7, 8});  // B -> H
    adj[2].push_back({3, 6});  // C -> D
    adj[2].push_back({4, 7});  // C -> E
    adj[3].push_back({5, 6});  // D -> F
    adj[3].push_back({6, 5});  // D -> G
    adj[4].push_back({8, 12}); // E -> I
    adj[5].push_back({7, 2});  // F -> H
    adj[6].push_back({8, 7});  // G -> I
    adj[7].push_back({8, 7});  // H -> I

    while (true) {
        char tujuan;
        cout << "Masukkan tujuan yang diinginkan (B, C, D, E, F, G, H, I) atau 'Q' untuk keluar: ";
        cin >> tujuan;

        if (tujuan == 'Q' || tujuan == 'q') {
            break; // Keluar dari loop jika pengguna memasukkan 'Q' atau 'q'
        }

        // Mapping dari karakter tujuan ke indeks node
        int tujuan_index = tujuan - 'A';

        // Validasi tujuan yang dimasukkan
        if (tujuan_index < 1 || tujuan_index >= n) {
            cout << "Tujuan tidak valid!" << endl;
            continue; // Lanjut ke iterasi berikutnya
        }

        vector<int> dist = dijkstra(0, n); // Mencari jalur terpendek dari node A (0)

        // Output jarak ke node tujuan
        cout << "Jalur terpendek dari A ke " << tujuan << ": " << dist[tujuan_index] << " km" << endl;
    }

    return 0;
}
