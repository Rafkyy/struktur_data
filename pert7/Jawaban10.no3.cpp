#include <stdio.h>

// Fungsi untuk pencarian berurutan (sequential search)
int sequentialSearch(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Masukkan nilai yang ingin dicari: ");
    scanf("%d", &key);

    int index = sequentialSearch(arr, size, key);

    if (index != -1) {
        printf("Nilai %d ditemukan pada indeks %d\n", key, index);
    } else {
        printf("Nilai %d tidak ditemukan dalam array\n", key);
    }

    return 0;
}
