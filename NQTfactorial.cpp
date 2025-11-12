#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long fact = 1;
    cin >> n;

    if(n < 0){
        cout << "factorial is not for -ve no. " << endl;
    }

    else{
        for( int i = 2; i <= n; i++){
            fact *= i;
        }

        cout << " factorial of " << n << " is "<< fact << endl;
    }
}