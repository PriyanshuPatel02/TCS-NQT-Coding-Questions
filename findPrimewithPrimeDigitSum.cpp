#include<bits/stdc++.h>
using namespace std;

bool isPrime( int n){
    if(n <= 1)  return false;

    for( int i = 2; i*i <= n; i++){
        if( n % i == 0) 
          return false;
    }

    return true;
}

int sumofDigits(int n){
    int sum = 0;
    while(n > 0){                 // 11  1 > 0
        sum += n % 10;         // 11%10 = 1  // sum = 1 + 1%10 = 2
        n /= 10;   // n = n / 10;  // 11/10 = 1
    }
    return sum;
}
int main(){
    int a, b;
    cout << " Enter two numbers(range) ";
    cin >> a >> b;

    for(int num  = a; num <= b; num++){
        if(isPrime(num)){
            int digitSum = sumofDigits(num);

            if(isPrime(digitSum)){
                cout << num << endl;
            }
        }
    }

    return 0;
}


// aisa prime no. print krna hai jiska sum bhi prime jo jaise ki 
// a = 10 b = 20 iske bitch me 11 13 17 19 prime hai------------> jisme 11 ===> 1 + 1 = 2 yeh bas prime hai