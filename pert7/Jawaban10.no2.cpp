#include <stdio.h>
#include <string.h>

// Fungsi untuk membalik string
void reverseString(char *str) {
    int length = strlen(str);
    char *begin = str;
    char *end = str + length - 1;
    char temp;

    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;

        begin++;
        end--;
    }
}

// Fungsi untuk menampilkan string
void displayString(char *str) {
    printf("%s\n", str);
}

int main() {
    char str[100];

    printf("Masukkan sebuah kalimat: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Menghapus karakter newline

    printf("Kalimat asli: ");
    displayString(str);

    reverseString(str);

    printf("Kalimat terbalik: ");
    displayString(str);

    return 0;
}
