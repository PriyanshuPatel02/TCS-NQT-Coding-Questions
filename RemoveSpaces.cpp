#include<bits/stdc++.h>
using namespace std;


string removeSpace(string str){
       int count = 0;  // spaces seen so far 

    for(int i = 0; i < str.length(); i++){
        if(str[i] != ' '){   // if whitespace is present
           str[count] = str[i];  // remove whitespace  // str[0] = str[0]= 'a'  c= 1 kr do   // str[1] = str[1]  yeha  pass space tha
             count++;  // c= 2
        }

    }
     str.resize(count);

        return str;
}
int main(){
    string str = "a b c";
    string ans = removeSpace(str);

    cout << ans << endl;

    return 0;
}