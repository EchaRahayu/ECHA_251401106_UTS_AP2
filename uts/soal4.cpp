#include <iostream>
using namespace std;

int main() {
    string mantra;
    char c;

    system("CLS");

    int i = 0;
    int jumlahVokal = 0;

    cout << "Masukkan mantra: ";
    cin >> mantra;

    if (mantra.length() > 0) {
        do {
            char c = mantra[i];

            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' ||
                c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') {
                jumlahVokal = jumlahVokal + 1;
            }

            i++;
        } while (i < mantra.length());
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

    return 0;
}