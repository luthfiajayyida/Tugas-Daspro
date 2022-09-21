#include <iostream>
#include <stdio.h>

using namespace std;

/*
Nama    : Luthfia Jayyida Ainaya F
NIM     : A11.2022.14604

luas_alas == luas_atap
luas_sisi_kanan == luas_sisi_kiri
luas_sisi_depan == luas_sisi_belakang
*/

int main()
{
    float panjang, lebar, tinggi, luas_alas, luas_sisi_depan, luas_sisi_kanan, luas_permukaan_balok;

    cout << "masukkan panjang : ";
    cin >> panjang;
    cout << "masukkan lebar : ";
    cin >> lebar;
    cout << "masukkan tinggi : ";
    cin >> tinggi;
    luas_alas = panjang*lebar;
    luas_sisi_depan = panjang*tinggi;
    luas_sisi_kanan = lebar*tinggi;
    luas_permukaan_balok = 2*(luas_alas+luas_sisi_depan+luas_sisi_kanan);
    cout << "luas permukaan baloknya adalah : " << luas_permukaan_balok << endl;

    return 0;
}
