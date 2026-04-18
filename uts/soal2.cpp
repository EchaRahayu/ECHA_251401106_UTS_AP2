#include<iostream>
using namespace std;

int main() {
    string BilanganBiner;

    system("CLS");
    cout << "Input kode biner: ";
    cin >> BilanganBiner;

    int desimal = 0;
    for(int i = 0; i < BilanganBiner.length(); i++) {
        if(BilanganBiner[i] != '0' && BilanganBiner[i] != '1') {
            cout << "Pesan Rusak!";
        }
        desimal = desimal * 2 + (BilanganBiner[i] - '0');
    }
    cout << "Angka desimal dari biner " << BilanganBiner << " Adalah: " << desimal;
return 0;
}
