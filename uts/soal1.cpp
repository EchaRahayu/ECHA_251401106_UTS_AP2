#include<iostream>
using namespace std;

int main() {
    int N;

    system("CLS");
    cout << "Kode: ";
    cin >> N;
    if(N > 0 && (N & (N-1))== 0) {
        cout << "Ya";
    }
    else {
        cout << "Bukan";
    }
return 0;
}
