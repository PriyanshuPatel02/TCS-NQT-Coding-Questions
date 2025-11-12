#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ans;
    unordered_map<char, int> mp;
    vector<char>arr(n);
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(auto &ch : arr){
        mp[ch]++;
    }

     for(auto  &ch : arr){
         if (mp[ch] %2 != 0){
             ans = ch;
             break;
            
         }
     }
      if (ans != '\0')
        cout << ans << endl;
    else
        cout << "No character with odd frequency" << endl;

        return 0;

      
}

// 5 --> input
// a b a c b   --> char arr
// c --> output
