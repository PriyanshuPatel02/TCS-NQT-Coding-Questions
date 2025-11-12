#include<bits/stdc++.h>
using namespace std;


bool checkAlpha(string str){
    
    for( auto ch : str){
        if(!isalnum(ch)){   // check if char is not a letter or digit
             return false;
        }
    }

    return !str.empty();  // return false if string is empty
}
int main(){
    string n;
    cin >> n;

    if(checkAlpha(n)){
        cout << "the string is alphanumeric. " << endl;
    }


    else{
        cout << " not alphanumeric ";
    }
}