#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while( n!= 0){
        int bit = n%2;
        int toggleBit = bit ^ 1; // XOR toggle the bit 0--1, 1--->0;
        ans += toggleBit * pow(2, i);

        n = n/2;
        i++;
    }

    cout << " Ans is " << ans << endl;
    return 0;
}

//like 10 --> 1010 ab toggle karo 0101 --> 5 
// input = 10
// output = 5