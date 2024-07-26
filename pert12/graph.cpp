#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <limits.h>

using namespace std;

// Struktur untuk merepresentasikan graf menggunakan daftar ketetanggaan
class Graph {
public:
    unordered_map<string, vector<pair<string, int>>> adjList;

    void addEdge(const string& city1, const string& city2, int distance);
    void printGraph();
    void dijkstra(const string& start);
};

// Fungsi untuk menambahkan sisi ke graf
void Graph::addEdge(const string& city1, const string& city2, int distance) {
    adjList[city1].push_back(make_pair(city2, distance));
    adjList[city2].push_back(make_pair(city1, distance)); // Karena graf tidak berarah
}

// Fungsi untuk mencetak graf
void Graph::printGraph() {
    for (const auto& pair : adjList) {
        cout << pair.first << ": ";
        for (const auto& neighbor : pair.second) {
            cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
        }
        cout << endl;
    }
}

// Fungsi untuk algoritma Dijkstra
void Graph::dijkstra(const string& start) {
    // Menginisialisasi jarak dari simpul awal ke semua simpul lain dengan nilai tak hingga
    unordered_map<string, int> dist;
    for (const auto& pair : adjList) {
        dist[pair.first] = INT_MAX;
    }
    dist[start] = 0;

    // Menggunakan antrian prioritas untuk memilih simpul dengan jarak terpendek yang belum diproses
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> pq;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        string u = pq.top().second;
        pq.pop();

        // Memperbarui jarak untuk semua tetangga simpul yang dipilih
        for (const auto& neighbor : adjList[u]) {
            string v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    // Mencetak jarak terpendek dari simpul awal
    cout << "Jarak terpendek dari kota " << start << " ke semua kota lain:\n";
    for (const auto& pair : dist) {
        cout << "Kota " << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    Graph g;

    // Menambahkan sisi ke graf
    g.addEdge("A", "B", 10);
    g.addEdge("A", "C", 15);
    g.addEdge("B", "D", 12);
    g.addEdge("B", "E", 15);
    g.addEdge("C", "E", 10);
    g.addEdge("D", "E", 2);
    g.addEdge("D", "F", 1);
    g.addEdge("E", "F", 5);

    cout << "Graf peta:\n";
    g.printGraph();

    cout << "\nAlgoritma Dijkstra dari kota A:\n";
    g.dijkstra("A");

    return 0;
}
