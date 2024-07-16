#include <iostream>

using namespace std;

// Definisi struktur Node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru di awal linked list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();  // Alokasi node baru
    new_node->data = new_data;    // Masukkan data ke dalam node baru
    new_node->next = (*head_ref); // Jadikan node baru sebagai head
    (*head_ref) = new_node;       // Pindahkan head ke node baru
}

// Fungsi untuk menambahkan node baru di akhir linked list
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node();  // Alokasi node baru
    Node* last = *head_ref;       // Gunakan node terakhir sebagai pointer
    new_node->data = new_data;    // Masukkan data ke dalam node baru
    new_node->next = nullptr;     // Node baru menjadi node terakhir, jadi next adalah nullptr

    // Jika linked list kosong, jadikan node baru sebagai head
    if (*head_ref == nullptr) {
        *head_ref = new_node;
        return;
    }

    // Jika tidak kosong, iterasi sampai node terakhir
    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = new_node; // Ganti next dari node terakhir menjadi node baru
}

// Fungsi untuk menampilkan linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr; // Inisialisasi linked list kosong

    // Tambahkan node ke linked list
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);

    cout << "Linked list sebelum perubahan: ";
    printList(head);

    // Menambahkan node baru
    append(&head, 4);
    append(&head, 5);

    cout << "Linked list setelah perubahan: ";
    printList(head);

    return 0;
}
