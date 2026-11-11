#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

// TODO : Insert di Depan
void insertFirst(int n) {
    Node *newNode = new Node;
    newNode -> value = n;
    newNode -> next = NULL;

    if(head == NULL){
        head = newNode;
        tail = head;
    } else {
            newNode -> next = head;
            head = newNode;
    }
}

// TODO : Insert di belakang
void insertLast(int n) {
    Node *newNode = new Node;
    newNode -> value = n;
    newNode -> next = NULL;

    if(head == NULL){
        head = newNode;
        tail = head;
    } else {
        tail -> next = newNode;
        tail = newNode;
    }
}

// hapus data awal
void deleteByValue(int check) {
    if (head == NULL) {
        return;
    }

    Node *temp = head;
    head = head->next;
    if (head == NULL) tail = NULL; 
    delete temp;
}

// Hapus semua node
void deleteAll() {
    Node *p = head;

    while(p != NULL) {
        Node *hapus = p;
        p = p -> next;
        delete hapus;
    }

    head = NULL;
    tail = NULL;
}

// Menu utama tanpa switch-case
int main() {
    int pilihan;
    int n;
    int check;

    do {
        cout << "\n===== Daftar Peserta Lolos =====\n";
        cout << "1. Tambah di awal\n";
        cout << "2. Tambah di akhir\n";
        cout << "3. Hapus data di awal\n";
        // cout << "4. pendaftar yang lolos\n";
        cout << "0. Keluar\n";
        cout << "===================================\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        if(pilihan == 1) {
            cout << "Masukkan nilai: ";
            cin >> n;

            insertFirst(n);
        }
        else if(pilihan == 2) {
            cout << "Masukkan nilai: ";
            cin >> n;

            insertLast(n);
        }
        else if(pilihan == 3) {
            cout << "Masukkan nilai yang ingin dihapus: ";
            cin >> check;

            deleteByValue(check);
        }

        else if(pilihan == 0) {
            deleteAll();
            cout << "Program selesai.\n";
        }
        else {
            cout << "Pilihan tidak valid.\n";
        }

    } while(pilihan != 0);

    return 0;
}