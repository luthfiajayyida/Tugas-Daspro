#include <iostream>

using namespace std;

int main()
{
    int sum;
    int numb;
    cout << "Enter Your Number : ";
    cin >> numb;
    while(numb != 9999){
        sum += numb;
        cout << "Enter Your Number : ";
        cin >> numb;
    }
        cout << "Jumlah Bilangan = " << sum << endl;
    return 0;
}
