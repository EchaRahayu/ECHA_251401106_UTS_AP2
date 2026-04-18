#include <iostream>
using namespace std;

int main() {

    system("CLS");
    string kalimat;
    int jumlah = 0;
    int i = 0;

    cout << "Masukkan daftar judul buku: ";
    getline(cin, kalimat);

    if (kalimat.length() > 0) {
        do {
            if (kalimat[i] != ' ' && (i == 0 || kalimat[i-1] == ' ')) {
                jumlah = jumlah + 1;
            }
            i = i + 1;
        } while (i < kalimat.length());
    }

    cout << "Jumlah judul buku: " << jumlah << endl;

    return 0;
}