#include <iostream>

using namespace std;

int main() {
    string nama;
    int nim;

    cout << "------------SYSTEM PEMBAGIAN KELAS MAHASISWA BARU SISTEM INFORMASI 2024----------" << endl << endl << endl;
    cout << "Nama lengkap         : ";
    getline(cin, nama);
    cout << endl;

    cout << "NIM 3 digit terakhir : ";
    cin >> nim;
    cin.ignore(); 
    cout << endl << endl << endl;

    if (nim >= 1 && nim < 36) {
        cout << "Selamat Datang " << nama << " Sebagai Mahasiswa Baru System Informasi Kamu Masuk Kelas 2024A " << endl;
    } else if (nim >= 36 && nim < 72) {
        cout << "Selamat Datang " << nama << " Sebagai Mahasiswa Baru System Informasi Kamu Masuk Kelas 2024B " << endl;
    } else if (nim >= 72 && nim < 107) {
        cout << "Selamat Datang " << nama << " Sebagai Mahasiswa Baru System Informasi Kamu Masuk Kelas 2024C " << endl;
    } else if (nim >= 107 && nim < 143) {
        cout << "Selamat Datang " << nama << " Sebagai Mahasiswa Baru System Informasi Kamu Masuk Kelas 2024D " << endl;
    } else if (nim >= 143 && nim < 179) {
        cout << "Selamat Datang " << nama << " Sebagai Mahasiswa Baru System Informasi Kamu Masuk Kelas 2024E " << endl;
    } else if (nim >= 179 && nim < 215) {
        cout << "Selamat Datang " << nama << " Sebagai Mahasiswa Baru System Informasi Kamu Masuk Kelas 2024F " << endl;
    } else if (nim >= 215 && nim < 246) {
        cout << "Selamat Datang " << nama << " Sebagai Mahasiswa Baru System Informasi Kamu Masuk Kelas 2024G " << endl;
    } else {
        cout << "Maaf " << nama << " kamu tidak terdaftar di Kelas System Informasi manapun" << endl;
    }
    
    cout << endl << endl << endl;
   
    return 0;
}

