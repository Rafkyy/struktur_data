#include <stdio.h>
#include <stdlib.h>

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
    char *str;
    char character;
    int length;

    printf("Masukkan panjang kata: ");
    scanf("%d", &length);

    // Alokasikan memori untuk kata
    str = (char *)malloc((length + 1) * sizeof(char));

    if (str == NULL) {
        printf("Alokasi memori gagal.\n");
        return 1;
    }

    printf("Masukkan kata: ");
    scanf("%s", str);

    printf("Masukkan huruf yang ingin dicari: ");
    scanf(" %c", &character);

    int count = countCharacter(str, character);

    if (count > 0) {
        printf("Huruf '%c' ditemukan %d kali dalam kata.\n", character, count);
    } else {
        printf("Huruf '%c' tidak ditemukan dalam kata.\n", character);
    }

    // Bebaskan memori yang telah dialokasikan
    free(str);

    return 0;
}
