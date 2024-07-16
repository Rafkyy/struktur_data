#include <stdio.h>
#include <string.h>

typedef struct {
    int tgl;
    int bln;
    int th;
} Tanggal;

typedef struct {
    char noID[5];
    char nama[30];
    char jenis_kelamin; // 'L' atau 'P'
    Tanggal t;
} KTP;

typedef struct {
    KTP ktp;
    int jml;
} Data_KTP;

Data_KTP data_ktp[100]; // Array untuk menyimpan banyak data KTP
int jumlah_data = 0; // Jumlah data yang sudah dimasukkan

Data_KTP *p; // Pointer untuk akses data_ktp

// 1. Fungsi untuk menambah data
void tambah_data(char *noID, char *nama, char jenis_kelamin, int tgl, int bln, int th) {
    p = &data_ktp[jumlah_data]; // Pointer menunjuk ke elemen berikutnya yang kosong
    strcpy(p->ktp.noID, noID);
    strcpy(p->ktp.nama, nama);
    p->ktp.jenis_kelamin = jenis_kelamin;
    p->ktp.t.tgl = tgl;
    p->ktp.t.bln = bln;
    p->ktp.t.th = th;
    p->jml = jumlah_data + 1;
    jumlah_data++;
}

// 2. Fungsi untuk mencari data berdasarkan tahun kelahiran
void cari_data_tahun(int tahun) {
    printf("Data KTP dengan tahun kelahiran %d:\n", tahun);
    for (int i = 0; i < jumlah_data; i++) {
        p = &data_ktp[i];
        if (p->ktp.t.th == tahun) {
            printf("NoID: %s, Nama: %s, Jenis Kelamin: %c, Tanggal Lahir: %02d-%02d-%04d\n", 
                   p->ktp.noID, p->ktp.nama, p->ktp.jenis_kelamin, p->ktp.t.tgl, p->ktp.t.bln, p->ktp.t.th);
        }
    }
}

// 3. Fungsi untuk menampilkan data berdasarkan jenis kelamin
void tampilkan_data_jenis_kelamin(char jenis_kelamin) {
    printf("Data KTP dengan jenis kelamin %c:\n", jenis_kelamin);
    for (int i = 0; i < jumlah_data; i++) {
        p = &data_ktp[i];
        if (p->ktp.jenis_kelamin == jenis_kelamin) {
            printf("NoID: %s, Nama: %s, Jenis Kelamin: %c, Tanggal Lahir: %02d-%02d-%04d\n", 
                   p->ktp.noID, p->ktp.nama, p->ktp.jenis_kelamin, p->ktp.t.tgl, p->ktp.t.bln, p->ktp.t.th);
        }
    }
}

int main() {
    // Menambah beberapa data KTP
    tambah_data("1234", "Alice", 'P', 15, 5, 1990);
    tambah_data("5678", "Bob", 'L', 20, 8, 1992);
    tambah_data("9101", "Charlie", 'L', 30, 12, 1990);
    tambah_data("1121", "Diana", 'P', 25, 3, 1995);

    // Mencari data berdasarkan tahun kelahiran
    cari_data_tahun(1990);

    // Menampilkan data berdasarkan jenis kelamin
    tampilkan_data_jenis_kelamin('L');
    tampilkan_data_jenis_kelamin('P');

    return 0;
}
