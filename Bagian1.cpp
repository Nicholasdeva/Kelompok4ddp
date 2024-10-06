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
{int pilihan, totalMakanan = 0, totalMinuman = 0;
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

void tampilkanMenu()
{
    cout<<"===== Menu Makanan ====="<<endl;
    cout<<"1. Nasi Goreng      - "<< formatHarga(20000) <<endl;
    cout<<"2. Mie Goreng       - "<< formatHarga(15000) <<endl;
    cout<<"3. Ayam Bakar       - "<< formatHarga(25000) <<endl;
    cout<<"4. Sate Ayam        - "<< formatHarga(30000) <<endl;
    cout<<"5. Soto Ayam        - "<< formatHarga(18000) <<endl;
    cout<<"===== Menu Minuman ====="<<endl;
    cout<<"6. Teh Manis        - "<< formatHarga(5000) <<endl;
    cout<<"7. Kopi             - "<< formatHarga(8000) <<endl;
    cout<<"8. Jus Jeruk        - "<< formatHarga(10000) <<endl;
    cout<<"9. Es Teh           - "<< formatHarga(6000) <<endl;
    cout<<"10. Air Mineral     - "<< formatHarga(4000) <<endl;
    cout<<"0. Keluar/Total Harga"<<endl;
    cout<<"========================"<<endl;
}
