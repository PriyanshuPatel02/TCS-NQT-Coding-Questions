#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> fact(n+1, 1);

    for(int i = 1; i <= n; i++) {
        fact[i] = fact[i-1]*i; // f1 = f0*1 = 1 // f2 = f1*2= 2 f3=f2*3 = 6 f4=f3*4=24

    }
    cout << fact[n-1] * 2 << endl;  // f[4]*2  = 24*2 = 48
// here PM and president sit adjacent to each other each time..PM presd..presd PM isliye multiply 2 kiya hai
    return 0;
}

// 2 members should always be next to each other.. so 2 members can be in 2! ways 