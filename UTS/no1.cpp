#include <iostream>
using namespace std;

int main() {
    // deklarasi
    int array [2][3][4];
    int angka = 2;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                array [i][j][k] = angka;
                angka += 2;
            }
        }
        
    }

    int array [2][3][4];
    int angka = 1;

        for (int l = 0; l < 2; l++) {
        for (int m = 0; m < 3; m++) {
            for (int n = 0; n < 4; n++) {
                array [l][m][n] = angka;
                angka += 2;
            }
        }

    // menampilkan array
    for (int i = 0; i < 2; i++){
        cout << "Hasil " << i + 1 << endl;

            for (int j = 0; j < 3; j++){
                for (int k = 0; k < 4; k++){
                    for (int l = 0; l < 2; l++){
                        for (int m = 0; m < 3; m++){
                            for (int n = 0; n < 4; n++){
        cout << array[i][j][k] << + << array[l][m][n] "\t";
                            }
                        }
                    }
                }   
            }
        }        
    }
    return 0;
}