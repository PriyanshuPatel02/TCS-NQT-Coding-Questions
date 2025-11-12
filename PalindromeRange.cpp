#include<bits/stdc++.h>
using namespace std;
// check n  is th palindrome

bool isPalind( int n){
    int reverse = 0;
    int num = n;   // 123 

    while(num > 0){  // 12 > 0   // 1 > 0
        reverse = reverse * 10 + num % 10;  // 0*10 + 123%10(3) = 3  // 3*10 + 12 %10(2) = 30 + 2 = 32  // 32*10 + 1 % 10 = 321
        num = num / 10;    // 123/10 = 12   // 12/10 = 1  // 1/10 = 0
    }


    // agar n or reverse same hua to hi palindrome hoga
    if(n == reverse){  // 123 == 321
        return true;    // false
    }

    return false;
}

int main(){
    int min = 100;
    int max = 150;
    int count =0; 
    
    cout << "[";
    for(int i = min; i <=max; i++){
        if(isPalind(i)){
            cout << i;
            count++;


            if( count == 2){
                cout << "]";
                break;
            }
            else{
                cout << " ";
            }
        }
    }
    return 0;
}


// output 101 111 121 131 141 
// output [101 111];