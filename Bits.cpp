#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >>n;  // 8

    int ans = 0;
    int i = 1;

    while( n != 0){   // 8 != 0
        // int bit = n & 1; // agr 1 aaya toh ODD agr 0 aaya toh EVEN

        int bit = n % 2;   // bit = 8%2 = 0

        // ans = (bit * pow(10, i)) + ans;

          ans = bit * i + ans;  // 0*1 + 0 = 0

        // n = n >> 1; // right shift kr diya // like 123 hai toh 1 kiya fir 2 then 3
          n = n / 2; // just like n >> 1  // 8/2 = 4
          
          i = i * 10;  // 1*10 = 10 
        //   i++;
        
    }

    cout << " ans is " << ans << endl;
    return 0;
}