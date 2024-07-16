#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cstdio>

#define MAX_LEN 100

// Struktur Kata
struct Kata {
    char elemen[MAX_LEN];
    int jml_kata;
};

// Fungsi untuk mengonversi karakter ke T9
char convertToT9(char c) {
    c = toupper(c); // Konversi karakter ke uppercase
    if (c >= 'A' && c <= 'C') return '2';
    if (c >= 'D' && c <= 'F') return '3';
    if (c >= 'G' && c <= 'I') return '4';
    if (c >= 'J' && c <= 'L') return '5';
    if (c >= 'M' && c <= 'O') return '6';
    if (c >= 'P' && c <= 'S') return '7';
    if (c >= 'T' && c <= 'V') return '8';
    if (c >= 'W' && c <= 'Z') return '9';
    if (c == ' ') return '#';
    return c; // Untuk karakter lain (misal angka)
}

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

    // Konversi ke T9 dan cetak hasilnya
    for (int i = 0; i < p_kata->jml_kata; i++) {
        printf("%c", convertToT9(p[i]));
    }
    printf("\n");

    return 0;
}
