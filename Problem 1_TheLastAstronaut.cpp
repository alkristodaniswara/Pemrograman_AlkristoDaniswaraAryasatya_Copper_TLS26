#include <iostream>
using namespace std;

int main() {
    int N, K;

    cout << "Jumlah astronot: ";
    cin >> N;

    cout << "Nilai K awal: ";
    cin >> K;

    int a[100];

    for (int i = 0; i < N; i++) {
        a[i] = i + 1;
    }

    int sisa = N;
    int pos = 0;

    cout << "\nUrutan eliminasi: ";

    while (sisa > 1) {
        pos = (pos + K - 1) % sisa;

        int x = a[pos];

        cout << x;

        if (sisa > 2)
            cout << " -> ";

        for (int i = pos; i < sisa - 1; i++) {
            a[i] = a[i + 1];
        }

        sisa--;

        if (x % 2 == 0)
            K = K + 2;
        else
            K = K - 1;

        if (K < 2)
            K = 2;

        if (pos >= sisa)
            pos = 0;
    }

    cout << "\nAstronot terakhir: " << a[0] << endl;

    return 0;
}