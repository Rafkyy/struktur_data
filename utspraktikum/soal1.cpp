#include <iostream>

// Fungsi untuk menukar dua elemen
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2. mengurutkan elemen array secara ascending (Bubble Sort)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // 1. Menerima input array dari pengguna
    int n;
    std::cout << "Masukkan jumlah elemen dalam array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    bubbleSort(arr, n);
    // 3. Menampilkan array yang sudah diurutakn ke layar
    std::cout << "Array setelah diurutkan:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}