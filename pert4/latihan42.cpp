#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

// Fungsi untuk mencari kata dalam kalimat
bool searchWord(const string& sentence, const string& word) {
    // Membuat salinan kalimat
    string tempSentence = sentence;
    // Mengubah semua huruf dalam kalimat dan kata menjadi huruf kecil
    transform(tempSentence.begin(), tempSentence.end(), tempSentence.begin(), ::tolower);
    string tempWord = word;
    transform(tempWord.begin(), tempWord.end(), tempWord.begin(), ::tolower);
    // Mencari kata dalam kalimat
    size_t found = tempSentence.find(tempWord);
    // Mengembalikan true jika kata ditemukan, false jika tidak
    return found != string::npos;
}

int main() {
    string sentence;
    cout << "Masukkan kalimat: ";
    getline(cin, sentence);

    string word;
    cout << "Masukkan kata yang ingin dicari: ";
    cin >> word;

    if (searchWord(sentence, word)) {
        cout << "Kata '" << word << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Kata '" << word << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
