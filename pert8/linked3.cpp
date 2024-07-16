#include <iostream>

// Definisi struktur Node
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan node baru di awal linked list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node(); // Alokasi node baru
    new_node->data = new_data; // Masukkan data ke dalam node baru
    new_node->next = (*head_ref); // Jadikan node baru sebagai head
    (*head_ref) = new_node; // Pindahkan head ke node baru
}

// Fungsi untuk menambahkan node baru di akhir linked list
void append(Node** head_ref, int new_data) {
    Node* new_node = new Node(); // Alokasi node baru
    Node* last = *head_ref; // Gunakan pointer untuk menjelajah hingga node terakhir
    new_node->data = new_data; // Masukkan data ke dalam node baru
    new_node->next = nullptr; // Node baru ini akan menjadi node terakhir, sehingga next adalah nullptr

    if (*head_ref == nullptr) { // Jika linked list kosong, maka node baru adalah head
        *head_ref = new_node;
        return;
    }

    while (last->next != nullptr) { // Else, jelajahi sampai node terakhir
        last = last->next;
    }

    last->next = new_node; // Ubah next dari node terakhir
}

// Fungsi untuk menampilkan linked list
void printList(Node* node) {
    while (node != nullptr) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = nullptr; // Inisialisasi linked list kosong

    // Tambahkan node ke linked list
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);

    std::cout << "Linked list: ";
    printList(head);

    return 0;
}
