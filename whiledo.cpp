#include <iostream>
using namespace std;

int main () {

   int a = 1;


   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   } while ( a < 10 );

   return 0;
}