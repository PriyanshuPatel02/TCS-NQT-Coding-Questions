#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;  // 12
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0){  // 12
        int bit = n%2;  // 12%2=0  // 1%2 = 1

        ans = bit*pow(10, i) + ans; // 0*pow(10,0) + 0 // 0*pow(10,1) // 1*(10, 2) + 0 = 100 // 1*(10, 3) + 100 = 1000+ 100 = 1100

         n = n>>1; // right shift kr diya // n = n/2   // 3/2 = 1  // 1/2 = 0
        // n = n/2;
        i = i+1; //1 // 2 // 2+ 1 = 3

    }
    cout << ans << endl;  // 1100
    return 0;

}