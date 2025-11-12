#include<bits/stdc++.h>
using namespace std;

bool armStrongNum(int num ){
    int sum = 0, digits = 0;

    // count digits  
    int temp = num;
    while(temp > 0){
        digits++;   // jo digits hai woh count krta hai kitne digit hai number me like 152 isme 3 hai
        temp /= 10;
    }   
    // reset original num
    temp = num;
    // calc sum of powered digits
    while(temp > 0){
        int digit = temp % 10;
        sum += round(pow(digit, digits));
        temp /= 10;
    }
    return sum == num;
}
int main(){
    int n;
    cin >> n;

   int ans =  armStrongNum(n);
   cout << ans << endl;

}

// 153