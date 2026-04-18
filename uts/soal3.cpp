#include<iostream>
using namespace std;

int main() {
    string nama, nim;
    int nilai1, nilai2, nilai3;
    float rata_rata;

    system("CLS");
    cout << "Nama Mahasiswa: ";
    cin >> nama;
    cout << "Nim: ";
    cin >> nim;

    cout << "Nilai mata kuliah:" << endl;
    cout << "Algoritma dan Pemrograman: ";
    cin >> nilai1;
    cout << "Probabilitas dan Statistika: ";
    cin >> nilai2;
    cout << "Sistem Operasi: ";
    cin >> nilai3;

    if(nilai1 >= 60) {
        cout << "Algoritma dan Pemrograman: Lulus" << endl;
    } else {
        cout << "Algoritma dan Pemrograman: Tidak Lulus" << endl;
    }

    if(nilai2 >= 60) {
        cout << "Probabilitas dan Statistika: Lulus" << endl;
    } else {
        cout << "Probabilitas dan Statistika: Tidak Lulus" << endl;
    }

    if(nilai3 >= 60) {
        cout << "Sistem Operasi: Lulus" << endl;
    } else {
        cout << "Sistem Operasi: Tidak Lulus. Silahkan ulangi di tahun depan!" << endl;
    }

    rata_rata = (nilai1 + nilai2 + nilai3) / 3;
    cout << "Nilai Rata-rata Semester ini: " << rata_rata << endl;

    return 0;
}