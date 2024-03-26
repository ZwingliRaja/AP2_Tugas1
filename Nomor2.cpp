#include <iostream>
using namespace std;

// NOMOR 2
int main() {
    string nama;
    int golongan, jumlah_anak;
    const int gaji_pokok[] = {5000000, 3000000, 2500000};
    const double pajak = 0.05;
    const int tambahan_anak_1_2 = 500000;
    const int tambahan_anak_lebih_dari_2 = 750000;

    // Meminta input dari pengguna
    cout << "Masukkan Nama Anda: ";
    cin >> nama;

    cout << "Masukkan Golongan (1, 2, 3): ";
    cin >> golongan;

    cout << "Jumlah anak: ";
    cin >> jumlah_anak;

    // Menghitung gaji total
    int gaji_total = gaji_pokok[golongan - 1];
    gaji_total -= gaji_total * pajak; // Mengurangi pajak

    if (jumlah_anak >= 1 && jumlah_anak <= 2) {
        gaji_total += tambahan_anak_1_2 * jumlah_anak;
    } else if (jumlah_anak > 2) {
        gaji_total += tambahan_anak_1_2 * 2; // Tambahan untuk 1 dan 2 anak
        gaji_total += tambahan_anak_lebih_dari_2 * (jumlah_anak - 2); // Tambahan untuk anak ketiga dan seterusnya
    }

    // Menampilkan output
    cout << "Gaji total untuk " << nama << " adalah: Rp. " << gaji_total << endl;

    return 0;
}
