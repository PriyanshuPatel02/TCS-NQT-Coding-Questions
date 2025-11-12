#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
         string s="a";
    while(s.length() < k){
        // string temp="";
        int n = s.length();

        for(int i = 0; i < n; i++){
           char ch = s[i] == 'z' ? 'a' : s[i] + 1;
           s.push_back(ch);
            
      }  
    }
     return s[k-1];
    }
};


// Input: k = 5

// Output: "b"

// Explanation:

// Initially, word = "a". We need to do the operation three times:

// Generated string is "b", word becomes "ab".
// Generated string is "bc", word becomes "abbc".
// Generated string is "bccd", word becomes "abbcbccd".