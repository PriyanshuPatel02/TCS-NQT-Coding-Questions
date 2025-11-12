#include<bits/stdc++.h>
using namespace std;


int main(){
   int x, y;   // 13, 3
   cin >> x >> y;

   int lower = ( x/y )*y; // 13/3 * 3 = 4*3 = 12
   int upper = ((x + y -1) / y)*y;  // 13 + 3 - 1/3 * 3 = 5*3 = 15

   if(abs(x - lower) <= abs(upper - x)){
      cout << lower << endl;

   } 
   else {
      cout << upper << endl;
   }


   return 0;
   
}