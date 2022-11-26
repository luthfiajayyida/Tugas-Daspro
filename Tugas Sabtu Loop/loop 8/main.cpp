#include <iostream>

using namespace std;

int main()
{
   int sum_bil = 0;
   int bil;
   cout << "input nilai : ";
   cin >> bil;

   do{
    cout << bil << endl;
    sum_bil += 1;
    cout << "input nilai : ";
    cin >> bil;
   }
   while(bil != 9999);
   cout << "Jumlah Angka = " << sum_bil << endl;
    return 0;
}
