#include <iostream>

using namespace std;

int main()
{
    int i;
    int j;
    for(int i = 1 ; i <= 7 ; i++){
        cout << "Looping ke : " << i << endl;
        for(int j = 1 ; j <= 10 ; j++){
            cout << "- angka : " << j << " - ";
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
