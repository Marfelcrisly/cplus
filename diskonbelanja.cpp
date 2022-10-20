#include <iostream>

using namespace std;

int main()
{
	cout << "## Program Diskon Potongan Harga ##"<<endl;
	
	char pelanggan [20];
	int total_belanja, harga_akhir;
	
	cout<<"Masukkan Nama Pelanggan : ";
	cin>>pelanggan;
	cout<<"Masukkan Total Belanja : Rp.";
	cin>>total_belanja;
	cout<<endl;
	
	if ((total_belanja >= 250000) && (total_belanja < 500000)) {
    harga_akhir = total_belanja - (0.025*total_belanja);
    cout << "Selamat, anda mendapat diskon 2.5%" << endl;
    }
    else if ((total_belanja >= 500000) && (total_belanja < 1000000)) {
    harga_akhir = total_belanja - (0.05*total_belanja);
    cout << "Selamat, anda mendapat diskon 5%" << endl;
    }
    else if (total_belanja >= 1000000) {
    harga_akhir = total_belanja - (0.1*total_belanja);
    cout << "Selamat, anda mendapat diskon 10%" << endl;
    } 
    else {
    harga_akhir = total_belanja;
    }
 
    cout << "Total bayar: Rp." << harga_akhir << endl;
    cout << "Nama Pelanggan : " << pelanggan << endl;
 
    return 0;
}
