#include <iostream>
using namespace std;

int main() {
    // 1. Menginisialisasi variabel integer dengan nilai 10
    int nilai = 10;

    // 2. Mencetak nilai variabel menggunakan pointer
    cout << "Nilai awal variabel: " << nilai << endl;

    // Deklarasi pointer
    int* pointerNilai;

    // Inisialisasi pointer dengan alamat variabel nilai
    pointerNilai = &nilai;

    // 3. Mengubah nilai variabel menjadi 20 menggunakan pointer
    *pointerNilai = 20;

    // 4. Mencetak nilai variabel yang telah diubah menggunakan pointer
    cout << "Nilai setelah diubah: " << *pointerNilai << endl;

    return 0;
}
