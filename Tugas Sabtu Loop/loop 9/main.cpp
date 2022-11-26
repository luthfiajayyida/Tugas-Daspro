#include <iostream>

using namespace std;

int main()
{
    int sum_bil = 0;
    int bil;
    int sum = 0;
    cout << "Input Your Number : ";
    cin >> bil;

    do{
        cout << bil;
        sum_bil += 1;
        sum += bil;
        cout << "input Yout Number : ";
        cin >> bil;

    }
    while(bil !=9999);
    cout << "Jumlah Angka : " << sum_bil;
    cout << "Total Bilangan : " << sum;

    return 0;
}
