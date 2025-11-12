#include<bits/stdc++.h>
using namespace std;


int rangeArmstrong(int num){
    int sum = 0, count = 0;

    int temp = num;
    while ( temp > 0){
        count++;  // yeh count krne power like 3, 4, 2
        temp /= 10;
    }
    temp = num; // fir se temp ko num ke equal kr do

    while( temp > 0){
        int digit = temp % 10;
        sum += round(pow(digit, count));
        temp /= 10;
    }
    return sum == num;   // sum agr num ke equal aagya toh armstrong no. hai
}
int main(){
    int a, b;
    cin >> a >> b;

    for(int i= a; i <= b; i++){
       if( rangeArmstrong(i)){;
        cout << i << " " ;
       }
    }

    return 0;
}