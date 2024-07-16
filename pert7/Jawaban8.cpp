#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100

// Struktur Kata
struct Kata {
    char elemen[MAX_LEN];
    int jml_kata;
};

int main() {
    char kalimat[MAX_LEN];
    struct Kata kata;
    struct Kata *p_kata = &kata;
    p_kata->jml_kata = 0;
    char *p = p_kata->elemen;

    // Baca input dari pengguna
    printf("Masukkan sebuah kalimat : ");
    fflush(stdin);

    // Salin kalimat ke elemen struct Kata dan hitung jumlah karakter
    for (int i = 0; i < strlen(kalimat); i++) {
        *p = kalimat[i];
        p_kata->jml_kata++;
        p++;
    }
    p = p_kata->elemen;

    // Konversi ke uppercase dan ganti huruf dengan angka sesuai posisi dalam alfabet
    for (int i = 0; i < p_kata->jml_kata; i++) {
        if (isalpha(p[i])) {
            printf("%d", toupper(p[i]) - 'A' + 1);
        } else if (isdigit(p[i])) {
            printf("%c", p[i]);
        } else {
            printf("#");
        }
    }
    printf("\n");

    return 0;
}
