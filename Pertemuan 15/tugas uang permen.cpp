#include <iostream>

using namespace std;

int main()
{
	int uang, sisa_uang, harga_permen, jumlah_permen;
	cout << "Masukkan Nominal Uang Rp: ";
	cin >> uang;
	cout << "Harga permen yang akan dibeli Rp: ";
	cin >> harga_permen;
	
	if(harga_permen == 1000){
		jumlah_permen = 3;
		sisa_uang = uang - (jumlah_permen * harga_permen);
		cout << "Ardi membeli : " << jumlah_permen << " permen " << endl;
	}else if (harga_permen == 500){
		jumlah_permen = uang / harga_permen;
		sisa_uang = uang % harga_permen;
		cout << "Ardi Membeli : " << jumlah_permen << " Permen" <<endl;
		cout << "Sisa uangnya sekarang = Rp. " << sisa_uang << endl;
	}else if(harga_permen == 300){
		for(int i = 300; i<=uang; i=i+300){
			cout << i << " ";
		}
		jumlah_permen = uang/300;
		sisa_uang = uang - (jumlah_permen * harga_permen);
		cout << "maka sisa uangnya adalah = Rp. " << sisa_uang;
	}else{
		jumlah_permen = uang / harga_permen;
		sisa_uang = sisa_uang = uang - (jumlah_permen * harga_permen);
		cout << "ardi membeli : " << jumlah_permen << " permen " << endl;
		cout << "maka sisa uangnya sekarang adalah = Rp. " << sisa_uang;
	}
	
}
