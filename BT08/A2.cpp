#include <iostream>
using namespace std;

int main( )
{
    //a 1
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }

   //b 4
   int b[5] = {1, 2, 3, 4};
   for (int *ip = b; (*ip) != NULL; ip++) {
      cout << (void*) ip << " : " << (*ip) << endl;
   }

   //c 8
   double c[5] = {1.1, 2.2, 3.3, 4.4};
   for (double *dp = c; (*dp) != NULL; dp+=2) {
      cout << (void*) dp << " : " << (*dp) << endl;
   }

   return 0;
}
