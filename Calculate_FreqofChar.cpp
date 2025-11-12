#include<bits/stdc++.h>
using namespace std;

void printFreq( string str){
    sort(str.begin(), str.end());

    char ch = str[0];  // p
    int count = 1;

    for( int i = 1; i < str.length(); i++){
        if( str[i] == ch){  /// r not equal to p hai toh else mein jao
            count++;
        }

        else{
            cout << ch << count << " ";
            count = 1; // fir se count ko 1 kar do
            ch = str[i]; // ch = str[1] = e str[2] = h
        }
    }

    cout << ch << count << " ";
}
int main(){
    string str = "priyanshupatel";
    printFreq(str);

    return 0;
}