#include <iostream>
using namespace std;

pair<int, int> cari_data(int array[][3], int baris, int kolom, int target) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            if (array[i][j] == target) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

void cetak_array(int array[][3], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int baris, kolom;
    cout << "Masukkan jumlah baris array: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom array: ";
    cin >> kolom;

    int array[baris][kolom];
    cout << "Masukkan elemen array:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cin >> array[i][j];
        }
    }

    cout << "\nArray 2 Dimensi:" << endl;
    cetak_array(array, baris, kolom);

    int target;
    cout << "\nMasukkan data yang ingin dicari: ";
    cin >> target;

    pair<int, int> hasil = cari_data(array, baris, kolom, target);

    if (hasil.first != -1 && hasil.second != -1) {
        cout << "Data " << target << " berada pada posisi [" << hasil.first << "][" << hasil.second << "]" << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
