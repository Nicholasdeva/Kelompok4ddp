void pilihMenu(int pilihan, int &totalMakanan, int &totalMinuman)
{
    if (pilihan >= 1 && pilihan <= 5)
    {
        totalMakanan += hargaMakanan[pilihan - 1];
        cout<<"Anda memilih makanan."<<endl;
    }
    else if (pilihan >= 6 && pilihan <= 10)
    {
        totalMinuman += hargaMinuman[pilihan - 6];
        cout << "Anda memilih minuman."<<endl;
    }
}

void tampilkanTotalPembelian(int totalMakanan, int totalMinuman)
{
    int total = totalMakanan + totalMinuman;

    cout<<"=========== Total Pembelian ============"<<endl;
    cout<<"Total makanan   : " << formatHarga(totalMakanan) <<endl;
    cout<<"Total minuman   : " << formatHarga(totalMinuman) <<endl;
    cout<<"========================================"<<endl;
    cout<<"Total keseluruhan : " << formatHarga(total) <<endl;
    cout<<"=====Terima kasih telah berbelanja!====="<<endl;
}
