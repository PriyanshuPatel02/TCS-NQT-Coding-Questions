#include<bits/stdc++.h>
using namespace std;

int findGCD( int m, int n){

    for(int i = min(m, n); i > 0; i--){

        if(  m % i == 0 && n % i == 0){
            return i;
        }                                     
    }
    return 1;
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;

    int ans = findGCD(n1, n2);

    cout << " The GCD of n1 and n2 " << ans << endl;
}