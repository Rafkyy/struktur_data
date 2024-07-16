#include <iostream>
#include <queue>

using namespace std;

// Definisi struktur pelanggan dengan nomor antrian dan nama
struct Customer {
    int queueNumber;
    string name;
};

int main() {
    queue<Customer> bankQueue; // Inisialisasi queue untuk menyimpan pelanggan
    int currentQueueNumber = 1; // Inisialisasi nomor antrian pertama
    char choice;

    do {
        // Menu utama
        cout << "Menu: \n";
        cout << "1. Tambah pelanggan ke antrian\n";
        cout << "2. Layani pelanggan\n";
        cout << "3. Lihat antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                // Menambah pelanggan ke antrian
                Customer newCustomer;
                newCustomer.queueNumber = currentQueueNumber++; // Set nomor antrian
                cout << "Masukkan nama pelanggan: ";
                cin >> newCustomer.name;
                bankQueue.push(newCustomer); // Tambah pelanggan ke antrian
                cout << "Pelanggan " << newCustomer.name << " dengan nomor antrian " << newCustomer.queueNumber << " ditambahkan ke antrian.\n";
                break;
            }
            case '2': {
                // Melayani pelanggan di depan antrian
                if (!bankQueue.empty()) {
                    Customer currentCustomer = bankQueue.front(); // Ambil pelanggan di depan antrian
                    cout << "Melayani pelanggan " << currentCustomer.name << " dengan nomor antrian " << currentCustomer.queueNumber << ".\n";
                    bankQueue.pop(); // Hapus pelanggan dari antrian setelah dilayani
                } else {
                    cout << "Antrian kosong. Tidak ada pelanggan untuk dilayani.\n";
                }
                break;
            }
            case '3': {
                // Menampilkan daftar antrian saat ini
                if (!bankQueue.empty()) {
                    queue<Customer> tempQueue = bankQueue; // Buat salinan antrian untuk ditampilkan
                    cout << "Antrian saat ini: \n";
                    while (!tempQueue.empty()) {
                        Customer cust = tempQueue.front(); // Ambil pelanggan di depan antrian
                        cout << "- Nomor antrian: " << cust.queueNumber << ", Nama: " << cust.name << "\n";
                        tempQueue.pop(); // Hapus pelanggan dari antrian sementara setelah ditampilkan
                    }
                } else {
                    cout << "Antrian kosong.\n";
                }
                break;
            }
            case '4': {
                // Keluar dari program
                cout << "Keluar dari program.\n";
                break;
            }
            default: {
                // Opsi tidak valid
                cout << "Opsi tidak valid. Silakan coba lagi.\n";
                break;
            }
        }
        cout << endl;
    } while (choice != '4'); // Ulangi menu sampai pengguna memilih untuk keluar

    return 0;
}
