#include <iostream>

using namespace std;

int main()
{
   int i = 100;
   int j = 1;
   for(i, j;i >= 1, j <= 100; i--, j++){
    cout << "i = " << i << " dan " << " j = " << j << endl;
   }
}
