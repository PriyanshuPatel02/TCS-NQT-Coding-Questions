#include<bits/stdc++.h>
using namespace std;

string intToRoman(int num){
   string  res = " ";
   string symbol[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
   int val[] =       {1000, 900, 500,  400, 100, 90,   50,    40,   10,   9,    5,   4 ,  1 };

   for(int i = 0; num != 0; i++){       // 10!= 0
          while(num >= val[i]){
            num -= val[i];
            res += symbol[i];
          }
   }

   return res;
}

int main(){
    int n;
    cin >> n;

    string res = intToRoman(n);

    cout << "The Roman of that integer is " << res << endl;
}