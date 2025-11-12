#include<bits/stdc++.h>
using namespace std;

int sumOfPrimes(int n){
    if( n < 2) return 0;
    vector<bool> isPrime(n+1, true);  /// abhi sbko true kr diye

    isPrime[0] = isPrime[1] = false;

    //Sieve of Eratoshenes
    for(int i = 2; i*i <= n; i++){
        if(isPrime[i]){  // true hai
            for (int j = i*i; j <= n; j+=i)  // sare multiple of 2 ko false kr do wo prime nhi ho skte ... like 3 ke multiple ko kr do
               isPrime[j] = false;
        }
    }

    int sum = 0;
    for(int i = 2; i <= n; i++){
          if(isPrime[i])
            sum+= i;
    }

    return sum;
}
int main(){
    int n;
    cin >> n;

    cout << sumOfPrimes(n) << endl;
    return 0;
}