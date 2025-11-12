#include<bits/stdc++.h>
using namespace std;


void printFreq(string str){
    sort(str.begin(), str.end());  // ahinpruy

    char ch = str[0];  // a
    int count = 1;

    for(int i = 1; i < str.length(); i++){  /// i < 8
        if(str[i] == ch){  // s[1] h != a // s[2] = i ch = 'h'  Not equal
            count++;  //  c = 1 // c = 2
        }  
        else{
            cout << ch << count << " ";  // a1  // h1
            count=1;
            ch = str[i];   // update current character  // ch= str[1] = 'h'  ch = str[2] = 'i'

        }
    }
    cout << ch << count << " " ;
}

int main(){
    // string str = "priyanshu";
    // printFreq(str);

    string str;
    cin >> str;

    printFreq(str);
    return 0;
}