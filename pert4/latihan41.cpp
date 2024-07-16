#include <iostream>
#include <cctype> // Library untuk mengecek tipe karakter
using namespace std;

// Fungsi untuk menghitung jumlah konsonan, vokal, dan numerik dalam sebuah string
void hitung_karakter(const string& kalimat, int& konsonan, int& vokal, int& numerik) {
    // Inisialisasi jumlah konsonan, vokal, dan numerik
    konsonan = 0;
    vokal = 0;
    numerik = 0;

    // Iterasi melalui setiap karakter dalam kalimat
    for (char karakter : kalimat) {
        // Jika karakter adalah huruf
        if (isalpha(karakter)) {
            // Konversi karakter ke huruf kecil untuk perhitungan
            karakter = tolower(karakter);
            // Jika karakter adalah konsonan atau vokal
            if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') {
                vokal++;
            } else {
                konsonan++;
            }
        }
        // Jika karakter adalah angka
        else if (isdigit(karakter)) {
            numerik++;
        }
    }
}

int main() {
    string kalimat;
    int konsonan, vokal, numerik;

    // Input kalimat dari pengguna
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Hitung jumlah konsonan, vokal, dan numerik dalam kalimat
    hitung_karakter(kalimat, konsonan, vokal, numerik);

    // Menampilkan hasil
    cout << "Jumlah konsonan dalam kalimat: " << konsonan << endl;
    cout << "Jumlah vokal dalam kalimat: " << vokal << endl;
    cout << "Jumlah karakter numerik dalam kalimat: " << numerik << endl;

    return 0;
}
