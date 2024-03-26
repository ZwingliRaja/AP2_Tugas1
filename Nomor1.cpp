#include <iostream>
using namespace std;

// NOMOR 1
int main() {
    int bilangan;

    // Meminta pengguna untuk memasukkan bilangan bulat
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    // Mengecek apakah bilangan tersebut genap atau ganjil
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan genap." << endl;
    } else {
        cout << bilangan << " adalah bilangan ganjil." << endl;
    }

    return 0;
}