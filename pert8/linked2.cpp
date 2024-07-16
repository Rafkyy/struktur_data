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
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    std::cout << "Linked list: ";
    printList(head);

    return 0;
}
