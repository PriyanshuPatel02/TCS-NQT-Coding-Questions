#include<bits/stdc++.h>
using namespace std;

int RomanToInt(string s){
      unordered_map<char, int >mp;
      mp['I'] = 1;
       mp['V'] = 5;
       mp['X'] = 10;
       mp['M'] = 1000;
       mp['C'] = 100;
       mp['L'] = 50;

       int ans = 0;

       for(int i = 0; i < s.length(); i++){
          if(mp[s[i]] < mp[s[i + 1]]){   // if (5 < 1) ❌ false
            ans -= mp[s[i]];   
          }

          else{
            ans += mp[s[i]];    // ans = 0 + 5 = 5
          }
       }

       return ans;
}

int main(){
    string num;  
    cin >> num;  // VI

    int ans = RomanToInt(num);

    cout << "Roman to Int " << ans << endl;
}