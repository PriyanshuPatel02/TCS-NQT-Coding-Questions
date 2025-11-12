#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
   
   if(n <= 1)   return false;

   for(int i = 2; i*i <= n; i++){   // 2*2<2  == 4<2 // 2*2 <=3  // 4<=4
        if(n%i == 0){  // 4%2==0 
            return false;
        }
   }
   return true;  // 2 //3
}
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 2; i<= n; i++){
        if(isprime(i)) // i=3 i=4
        sum += i;  // 0+2+3
    }
    cout << sum << endl;

    return 0;
}