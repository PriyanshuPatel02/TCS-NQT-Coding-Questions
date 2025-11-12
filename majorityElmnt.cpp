#include<bits/stdc++.h>

using namespace std;

vector<int> majorelmt(vector<int> &nums){       
    unordered_map<int , int> mp;                    
    int n = nums.size();               

    for(auto frq : nums){        
        mp[frq]++;            
    }

    vector<int> result;

    for(auto it : mp){
        if( it.second > n/3 ){   // n size hai size se bada hona chahiye
            result.push_back(it.first);
        }
    }
    return result;
}


int main(){
   vector<int> arr = {2, 2 ,1, 2 ,2  };
   int size = sizeof(arr)/sizeof(arr[0]);
   vector<int> ans = majorelmt(arr);

   for(int val : ans){
    cout << val << " ";
   }
   return 0; 
}
//  4, 6,4,3,4

