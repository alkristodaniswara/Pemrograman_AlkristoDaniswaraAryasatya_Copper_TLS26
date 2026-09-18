#include <iostream>
using namespace std;

int main() {
    char pesan[10];
    int huruf, sebelumnya = 0, hasil;

    cout << "Masukkan pesan: ";
    cin >> pesan;

    for (int i = 0; pesan[i] != '\0'; i++) {

        huruf = pesan[i] - 'A' + 1;

        if (i == 0) {
            cout << pesan[i];
        } else {
            hasil = huruf + sebelumnya;

            if (hasil > 26) {
                hasil = hasil - 26;
            }

            cout << char('A' + hasil - 1);
        }

        sebelumnya = huruf;
    }

    cout << endl;

    return 0;
}