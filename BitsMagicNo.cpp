#include<bits/stdc++.h>
using namespace std;

int magicNo(int n){
    // int power = 1;
    int ans = 0;
    int i = 1;

      while( n != 0){
        int bit = n & 1; // agr 1 aaya toh ODD agr 0 aaya toh EVEN

        // int bit = n % 2;

        ans = (bit * pow(5, i)) + ans;

        //   ans = bit * i + ans;

        n = n >> 1; // right shift kr diya // like 123 hai toh 1 kiya fir 2 then 3
        //   n = n / 2; // just like n >> 1
          
        //   i = i * 10;
          i++;
        
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    int ans = magicNo(n);
    cout << " Magic No " << ans << endl;
}