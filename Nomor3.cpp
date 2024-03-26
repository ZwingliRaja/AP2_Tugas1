#include <iostream>

using namespace std;

// NOMOR 3
int main() {
  float berat, tinggi, bmi;
  string kategori;

  // Minta pengguna memasukkan berat badan (kg)
  cout << "Masukkan berat badan Anda (kg): ";
  cin >> berat;

  // Minta pengguna memasukkan tinggi badan (m)
  cout << "Masukkan tinggi badan Anda (m): ";
  cin >> tinggi;

  // Hitung BMI
  bmi = berat / (tinggi * tinggi);

  // Tentukan kategori berat badan berdasarkan BMI
  if (bmi < 18.5) {
    kategori = "Kurang berat badan";
  } else if (bmi >= 18.5 && bmi < 25) {
    kategori = "Berat badan normal";
  } else if (bmi >= 25 && bmi < 30) {
    kategori = "Kelebihan berat badan";
  } else {
    kategori = "Obesitas";
  }

  // Tampilkan BMI dan kategori berat badan
  cout << "BMI Anda: " << bmi << endl;
  cout << "Kategori berat badan: " << kategori << endl;

  return 0;
}
