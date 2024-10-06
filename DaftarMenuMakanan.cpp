#include <iostream>
using namespace std;

void tampilkanMenu();
void pilihMenu(int pilihan, int &totalMakanan, int &totalMinuman);
void tampilkanTotalPembelian(int totalMakanan, int totalMinuman);

int hargaMakanan[] = {20000, 15000, 25000, 30000, 18000};
int hargaMinuman[] = {5000, 8000, 10000, 6000, 4000};

string formatHarga(int harga) {
    string hasil = "Rp " + to_string(harga);
    int len = hasil.length();

    for (int i = len - 6; i > 2; i -= 3) {
        hasil.insert(i, ".");
    }

    return hasil;
}

int main()
{
    int pilihan, totalMakanan = 0, totalMinuman = 0;

    do
    {
        tampilkanMenu();
        cout<<"Masukkan pilihan Anda (1-10, atau 0 untuk keluar/Total Harga): ";
        cin>> pilihan;
        
        if (pilihan >= 1 && pilihan <= 10)
        {
            pilihMenu(pilihan, totalMakanan, totalMinuman);
        } 
        else if (pilihan != 0)
        {
            cout<<"Pilihan tidak valid. Silakan coba lagi."<<endl;
        }
    }
    while (pilihan != 0);

    tampilkanTotalPembelian(totalMakanan, totalMinuman);

    return 0;
}
