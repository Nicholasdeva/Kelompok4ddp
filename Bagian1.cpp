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
