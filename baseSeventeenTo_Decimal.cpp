#include<bits/stdc++.h>
using namespace std;


int main(){
    char hex[17];  // for storing input string
    long long decimal;

    int i = 0, val, len;  // val stores digit value, len = length of input

    decimal = 0;

    cin >> hex; // take input like "23GF"

    len = strlen(hex);

    len--;  /// to use it as power indx frm right to left

    while(hex[i]){  // convert char to its base-17 val
        if(hex[i] >= '0'  && hex[i] <= '9') {
            val = hex[i] - '0'; // '0' to '9'   change  0 to 9
        }
        else
            val =  hex[i] - 'A' + 10;  // 'A'   to 'G'  10 to 16

             decimal += val*pow (17, len);   // convert base 17 digit to decimal by psn : digit*17^power
             len--;

             i++;
        
    }
        cout << decimal;

    
}