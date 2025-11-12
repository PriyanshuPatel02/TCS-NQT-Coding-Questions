#include<bits/stdc++.h>
using namespace std;

string removeVowels(string str){
    // string ans = "";
    // for(int i = 0; i < str.length(); i++){
    //     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
    //       str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
    //           continue; // skip vowels
               
    //       }
    //       ans += str[i];
    // }



    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
          str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
            
            str = str.substr(0, i)+ str.substr(i+1); // (0, 2) + (3) == th +s = ths   // jgha jgha vowel h usko skip kr dega
            i--;   // i = 2  
               
          }
        
    }

    return str;
}

/// ******** DIFFERENT METHOD ********

// string removeVowel(string s){
// string vowels = "aeiouAEIOU";
// string res = "";
// for(char c : s){
//   if(vowels.find(c) == string::npos){  // mtlb vowel nhi ahi us char mein toh res me daal do
//      res += c;
//   }
// }

// return res;
// }

int main(){
    string str = "this is PriyAnshu";
    cout << "String after removing the vowels : " << removeVowels(str) << endl;
//take input like space seperated
    // getline(cin , str);
}


