#include <iostream>
#include <vector>
using namespace std;

int sequential(const vector<int>& data, int x) {
    for (int i = 0; i < data.size(); ++i) {
        if (data[i] == x) {
            return i;
        }
    }
    return -1;
}

int binary(const vector<int>& data, int x) {
    int low = 0;
    int high = data.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (data[mid] == x) {
            return mid;
        } else if (data[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int interpolation(const vector<int>& data, int x) {
    int low = 0;
    int high = data.size() - 1;
    while (low <= high && x >= data[low] && x <= data[high]) {
        int pos = low + ((double)(high - low) / (data[high] - data[low])) * (x - data[low]);
        if (data[pos] == x) {
            return pos;
        } else if (data[pos] < x) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> data = {1, 3, 5, 7, 9, 11, 13, 15};

    int cari, x;
    cout << "Menu Pencarian:\n";
    cout << "1. Sequential Search\n";
    cout << "2. Binary Search\n";
    cout << "3. Interpolation Search\n";
    cout << "Pilih metode pencarian (1-3): ";
    cin >> cari;

    cout << "Masukkan nilai yang dicari: ";
    cin >> x;

    int pos;
    switch (cari) {
        case 1:
            pos = sequential(data, x);
            break;
        case 2:
            pos = binary(data, x);
            break;
        case 3:
            pos = interpolation(data, x);
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return 1;
    }

    if (pos != -1) {
        cout << "Data " << x << " ditemukan pada posisi " << pos << endl;
    } else {
        cout << "Data " << x << " tidak ditemukan dalam array.\n";
    }

    return 0;
}
