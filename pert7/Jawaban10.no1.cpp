#include <stdio.h>
#include <string.h>

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

int main() {
    char str[] = "contoh kata untuk pencarian huruf";
    char character;

    printf("Kata yang diinisialisasi: %s\n", str);
    printf("Masukkan huruf yang ingin dicari: ");
    scanf(" %c", &character);

    int count = countCharacter(str, character);

    if (count > 0) {
        printf("Huruf '%c' ditemukan %d kali dalam kata.\n", character, count);
    } else {
        printf("Huruf '%c' tidak ditemukan dalam kata.\n", character);
    }

    return 0;
}
