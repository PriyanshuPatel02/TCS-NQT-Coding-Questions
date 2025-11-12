#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev = 0;
    // int digit;

    while( n > 0){
       int digit = n % 10;
        rev = rev*10 + digit;
        n = n / 10;
    }

    return rev;
}

int main(){
    int n ;
    cin >> n;

    int ans = reverse(n);
    cout << ans << endl;

}