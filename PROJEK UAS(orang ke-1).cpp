#include<iostream>
#include<iomanip>
using namespace std;

int main()
{  
    cout<<"##   Program Aplikasi Kasir  ##"<<endl;
    cout<<"==============================="<<endl<<endl;

    const int MAX_BARANG = 10;
    string namabarang [MAX_BARANG];
    long hargabarang [MAX_BARANG];
    int jumlahbarang [MAX_BARANG];
    long jumlahtotalbarang;
    long totalharga = 0;
    long jumlahbayar = 0;

    cout<<"##   Selamat Datang di Mini Market 08    ##"<<endl<<endl;

    cout<<"Masukan jumlah barangan yangan ingin dibeli : "; cin>>jumlahtotalbarang; cout<<endl;
    
    if (jumlahtotalbarang <= 0 || jumlahtotalbarang > MAX_BARANG){
        cout<<"Jumlah barang tidak valid"<<endl;
        return 0;
    }
    for (int i=0; i<jumlahtotalbarang; i++){
        cout<<"Barang ke : "<<i+1<<endl;
        cout<<"Nama Barang : ";
        getline(cin>>ws,namabarang[i]);
        cout<<"Harga Satuan : "; cin>>hargabarang[i];
        cout<<"Jumlah : "<<namabarang[i]<<" yang dibeli : "; cin>>jumlahbarang[i]; 
        cout<<endl;
    }cout<<endl;

	cout<<"------------------------------------------------------"<<endl;
    cout<<"####----      Struk Mini Market 08           ----####"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"NO   Barang  Jumlah  Harga Satuan    Sub Total"<<endl;
    for(int i = 0; i < jumlahtotalbarang; i++){
        cout<<setw(1)<<1+1<<" ";
        cout<<left<<setw(12)<<namabarang[i];
        cout<<right<<setw(15)<<jumlahbarang[i];
        cout<<setw(18)<<hargabarang[i];
        cout<<setw(15)<<jumlahbarang[i]*hargabarang[i];
        cout<<endl;
        totalharga=totalharga+(jumlahbarang[i]*hargabarang[i]);
    }
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Total Harga : Rp. "<<totalharga<<endl<<endl;
    cout<<"Jumlah Bayar : Rp. "; cin>>jumlahbayar; cout<<endl;
    
    while(jumlahbayar-totalharga<0){
        cout<<"Maaf, Uang anda kurang. Mohon lakukan ulang pembayaran"<<endl;
        cout<<"Jumlah Bayar : Rp. "; cin>>jumlahbayar; cout<<endl;
    }
    cout<<"Kembalian : Rp. "<<jumlahbayar-totalharga<<endl<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"#### Terimakasih sudah berbelanja, datang kembali ####"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    
    return 0;
    
}
