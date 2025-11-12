#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if( n < 2) return false;

    for(int i = 2; i*i <= n; i++){  // 4<=3 nhi ho skta
        if(n % i == 0)  return false;
    }

    return true;
}

// get the nth prime number
int getPrime(int k) {  //   3
    int count = 0;
    int current = 2;  // start from 1st prime no.

    while (true)
    // while(count <= position)
    { 
       if(isPrime(current)){ // agr prime hai toh // 2 // 3 // 4 nhi hoga // 5
        count++;    // c = 1 // c= 2  // c=3

        if(count == k)  // agr count ke equal psn ho jaye // 3 == 3
            return current; // curr = 5
       }

       current++;  // yeh hamesha chlega //curr = 3// curr = 4  // curr = 5
    }
    
}
int main(){
    int a, b;
    cin >> a >> b;

    int primeX = getPrime(a);  // 3 
    int primeY = getPrime(b);  // 5
    
    int res = (primeX*primeY) - 1;
    cout << res << endl;


    return 0;

    
}

// a = 3 b = 5
// the 3rd prime no. is 5 and 5th prime no. is 11
// 5*11-1 = 55-1= 54

