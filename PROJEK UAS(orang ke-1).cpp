#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	Cout<<"## PROGRAM APLIKASI KASIR ##<<endl;
	cout<<"===========================<<endl<<endl;
	const int MAX_BARANG = 10;
	string namabarang [MAX_BARANG];
	long hargabarang [MAX_BARANG];
	int jumlahbarang [MAX_BARANG];
	long jumlahtotalbarang;
	long totalharga=0;
	long jumlahbayar=0;

	cout<<"## SELAMAT DATANG DI MINI MARKET 08 ##"<<endl<<endl;
	cout<<"Masukan Jumlah Barang Yang Ingin Dibeli : ";cin>>jumlahtotalbarang;
	cout<<endl;

	if(jumlahtotalbarang<=0 || jumlahtotalbarang>MAX_BARANG){
		cout<<"Jumlah Barang Tidak Valid"<<endl;
		return 0;
	}
	for(int i=0;i<jumlahtotalbarang;i++)
		{
			cout<<"Barang ke : "<<i+1<<endl;
			cout<<"Nama Barang : ";
			getline(cin>>ws,namabarang[i]);
			cout<<"Harga Satuan :";
			cin>>hargabrang[i];
			cout<<"Jumlah :"<<namabarang[i]<<"yang dibeli :";
			cin>>jumlahbarang[i];
			cout<<endl;
		}
	cout<<endl;

	cout<<"===================================="<<endl;
	cout<<"##      STRUK MINIMARKET 08      ##"<<endl;
	cout<<"===================================="<<endl;
	cout<<"No Barang Jumlah Harga Satuan SubTotal"<<endl;
	for(int i=0;i<jumlahtotalbarang;i++){
		cout<<setw(1)<<1+1<<" ";
		cout<<left<<setw(12)<<namabarang[i];
		cout<<right<<setw(15)<<jumlahbarang[i];
		cout<<setw(18)<<hargabarang[i];
		cout<<setw(15)<<jumlahbarang[i]*hargabarang[i]);
	}
	cout<<"======================================"<<endl;
	cout<<"Total Harga : Rp. "<<totalharga<<endl<<endl;
	cout<<"Jumlah Bayar : Rp. ";
	cin>>jumlahbayar;
	cout<<endl;

	while(jumlahbayar-totalharga<0){
		cout<<"Maaf, Uang Anda Kurang.Mohon Lakukan Ulang Pembayaran<<endl;
			cout<<"Jumlah Bayar : Rp. ";
		cin>>jumlahbayar:
			cout<<endl;
	}
	cout<<"Kembalian : Rp."<<jumlahbayar-totalharga<<endl<<endl;
	cout<<"========================================="<<endl;
	cout<<"## TERIMA KASIH SUDAH BERBELANJA ##<<endl;
		cout<<"========================================"<<endl;

	return 0:
}
