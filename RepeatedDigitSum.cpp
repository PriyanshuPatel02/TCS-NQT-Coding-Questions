#include<bits/stdc++.h>
using namespace std;


int main(){
    int num;  // 34
    cin >> num;

    while(num >= 10){ // 34>10
        int sum = 0; 
        while(num > 0){  // 34  // 3>0
            sum += num%10;  // 0 + 34%10= 0+4  // 4+3%10= 7
            num /= 10;   // 34/10 = 3  // 3/10 = 0
        }
        num = sum;
    }

    cout << num << endl;
    return num;
}