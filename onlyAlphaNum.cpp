#include<bits/stdc++.h>
using namespace std;

// int result;  // es se bas integer value aaye
string res = "";

string checkChar(string str){
    for(auto ch  : str){
        if(isalnum(ch)){
            res += ch;
        }
    }

    return res;
}

int main(){
    string n;
    getline(cin , n); // 

    string ans = checkChar(n);
    cout << ans << endl;

    return 0;
}

// input = hell&*&^*7493
//  output = hell7493