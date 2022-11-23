#include <iostream>

using namespace std;

int main()
{
    cout << "PROGRAM AKAN BERHENTI JIKA ANDA MEMASUKKAN NILAI -99" << endl;
    int angka;
    while(true){
        cout << "Masukkan Nilai Anda : ";
        cin >> angka;
        if(angka == -99){
            cout << endl;
            cout << "Program Berhenti Karena Anda Memasukkan Angka -99" << endl;
            break;
        }
    }
}
