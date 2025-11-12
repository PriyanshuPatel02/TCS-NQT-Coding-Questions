#include<bits/stdc++.h>
using namespace std;


int replaceZero ( int num){
    // convert int to string
    string s = to_string(num); // 1010 ko "1010" bna diya
    // replaxe all '0' to '1'
    for(char &ch : s){
        if(ch == '0'){
            ch = '1';
        }

    }

    return stoi(s);  // string to int fir se kr diya 
}
int main(){
    int n;
    cin >> n;

    cout << replaceZero(n);

    return 0;
}