#include <iostream>

using namespace std;

int main()
{
    int jumlah = 0;
    float rata_rata;
    for(int i = 1; i <= 20; i++){
        jumlah = jumlah + i;
        rata_rata = jumlah / i;
        cout << i << endl;
    }
    cout << endl;
    cout << "Jumlah : " << jumlah << endl;
    cout << "Rata - Rata : " << rata_rata << endl;
}

