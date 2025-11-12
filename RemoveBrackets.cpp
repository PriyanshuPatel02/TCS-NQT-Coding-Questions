#include<bits/stdc++.h>
using namespace std;

string removeBrackets( string s1){
    string ans;

    for(int i = 0; i < s1.length(); i++ ){
        if(s1[i] != '(' && s1[i] != ')'){
            ans.push_back(s1[i]);
        }
    }

    return ans;
}
int main(){
    string s1 = "a+((b-c)+d)";
    string s2 = "(((a-b))+c)";

    cout << removeBrackets (s1) << endl;
    cout << removeBrackets (s2) << endl;
}