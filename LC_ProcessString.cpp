#include<bits/stdc++.h>
using namespace std;


//s = a#b%*
// a ke baad # hai mtlb duplicate karo a ka "aab%*"
// b ko append kr liye result mein..% aya toh reverse karo curr result ko mtlb "baa"
// * aaya toh removes the last character // ba 
class Solution {
    public:
       string processStr(string s){   ///
           string result = "";

           for(int i = 0; i < s.length(); i++){
                if(s[i] != '*' || s[i] != '#' || s[i] != '%' ){

                }
           }
       }
}