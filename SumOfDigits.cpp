#include<bits/stdc++.h>
using namespace std;

int sumofDigit(const string &num){
    int sum =0 ;
    for(char ch : num){
        if(isdigit(ch)){
            sum += ch -'0';  // converting char se integer mein
        }
    }
    return sum;
}
int main(){
    string n;
    cin >> n;

    int ans = sumofDigit(n);
    cout << "The sum of Digit "<< ans << endl;
}

// 2345
//The  sum of Digit 14