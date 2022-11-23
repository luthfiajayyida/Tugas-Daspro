#include <iostream>

using namespace std;

int main()
{
    for(int i = 2; i <=100; i++){
        if(i % 2 == 1){
            continue;
        }
        cout << "Nilai Genap : " << i << endl;
    }
}
