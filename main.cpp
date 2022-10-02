#include <iostream>

using namespace std;

int main()
{
    /*
    Nama    : Luthfia Jayyida Ainaya F
    NIM     : A11.2022.14609
    Kelompok: 4116
    */

    float temperature;
    cout <<"Masukkan Temperature :"<<endl;
    cin >> temperature;
    if (temperature<= 0)
    {
        cout<<"ice"<<endl;
    }
    else if (temperature>100){
        cout<<"gas" <<endl;
    }else{
        cout<<"liquit"<<endl;
    }
    return 0;
}
