#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk mencari dan menampilkan bilangan beserta indeksnya dalam array
void search_and_display(const vector<int>& data, int x) {
    bool found = false;
    cout << "Data " << x << " ditemukan pada index ke: ";
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] == x) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "Tidak ditemukan";
    }
    cout << endl;
}

int main() {
    vector<int> data = {12, 14, 15, 12, 5};
    int search_number;
    
    cout << "Isi array: ";
    for (int num : data) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Data yang dicari: ";
    cin >> search_number;

    search_and_display(data, search_number);

    return 0;
}
