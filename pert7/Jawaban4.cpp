#include <iostream>
#include <cstring>

using namespace std;

// Fungsi untuk mencari kemunculan huruf dalam kata
int countCharacter(const char *str, char character) {
    int count = 0;
    const char *p = str; // Pointer ke awal string

    while (*p != '\0') { // Loop hingga akhir string
        if (*p == character) {
            count++;
        }
        p++;
    }
    return count;
}

// Fungsi untuk membalik kata/kalimat
void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char *str;
    char character;
    int length;

    cout << "Masukkan panjang kata: ";
    cin >> length;

    // Alokasikan memori untuk kata
    str = new char[length + 1];

    cout << "Masukkan kata: ";
    cin >> str;

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> character;

    int count = countCharacter(str, character);

    if (count > 0) {
        cout << "Huruf '" << character << "' ditemukan " << count << " kali dalam kata." << endl;
    } else {
        cout << "Huruf '" << character << "' tidak ditemukan dalam kata." << endl;
    }

    // Membalik kata/kalimat
    reverseString(str);
    cout << "Kata/kalimat setelah dibalik: " << str << endl;

    // Bebaskan memori yang telah dialokasikan
    delete[] str;

    return 0;
}
