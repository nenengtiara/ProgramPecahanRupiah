#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama1, nama2;
    string nim1, nim2;
    long long uang;

    // INPUT DATA MAHASISWA
    cout << "===============================================\n";
    cout << "        PROGRAM PENGHITUNG PECAHAN UANG\n";
    cout << "===============================================\n\n";

    cout << "Masukkan Nama 1 : ";
    getline(cin, nama1);
    cout << "Masukkan NIM 1  : ";
    getline(cin, nim1);

    cout << "Masukkan Nama 2 : ";
    getline(cin, nama2);
    cout << "Masukkan NIM 2  : ";
    getline(cin, nim2);

    int menu;
    do {
        cout << "\n===============================================\n";
        cout << "                MENU PROGRAM\n";
        cout << "===============================================\n";
        cout << "1. Hitung Pecahan Uang\n";
        cout << "2. Tampilkan Data Mahasiswa\n";
        cout << "3. Exit\n";
        cout << "Pilihan Anda : ";
        cin >> menu;

        switch(menu) {
            case 1: {
                cout << "\nMasukkan jumlah uang: ";
                cin >> uang;

                int pecahan[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
                int jumlah;

                cout << "\n=== HASIL PECAHAN UANG ===\n";

                for(int i = 0; i < 10; i++) {
                    jumlah = uang / pecahan[i];
                    uang %= pecahan[i];
                    cout << "Pecahan Rp" << pecahan[i] << " : " << jumlah << " lembar/koin\n";
                }
                break;
            }

            case 2:
                cout << "\n=== DATA MAHASISWA ===\n";
                cout << "1. " << nama1 << " - " << nim1 << endl;
                cout << "2. " << nama2 << " - " << nim2 << endl;
                break;

            case 3:
                cout << "\nProgram selesai. Terima kasih!\n";
                break;

            default:
                cout << "Menu tidak valid!\n";
        }

    } while(menu != 3);

    return 0;
}

