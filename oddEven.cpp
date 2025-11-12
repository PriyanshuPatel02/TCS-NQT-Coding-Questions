#include<bits/stdc++.h>
using namespace std;

int main(){
    int odd = 0, even = 0, i = 0, diff;

    long long num;
    cin >> num;

    while(num != 0){
        if(i%2 == 0){
            even = even + num%10;
            num = num/10;
            i++;
        }
        else{
            odd = odd + num%10;
            num = num/10;
            i++;
        }
    } 
    cout << abs(odd - even);
    return 0;

}

// 4567
// i=0,2 Even --> 4, 6
// i = 1,3 Odd --> 5,7 
// sum = 12 - 10 = 2(ans)