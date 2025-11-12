#include<bits/stdc++.h>
using namespace std;

unordered_map<int, int> mp;

int countSize(vector<int>&arr){
    int size = arr.size();
  for(auto &num : arr){
       mp[num]++;
  }
int count = 0;
  for(auto &x : mp){  // x jo hai key value ke pair mein hai
    for(auto &y : mp){
        if(x.second >= y.first && y.second >= x.first){
            count ++;
        }
    }
  }

  return count;
    
}
int main(){
    // vector<int> arr = {1,2,3,4,5};
      vector<int> arr = {1,1,2,2,3};  // 1,2    1,1       2,1    2,2

    int ans = countSize(arr);

    cout << ans << endl;   // 4
}

// agr 1 ek baar aa rha jo y hai toh y bhi ek baar aa rha x mtlb (x,y) (1,1)
// agr 2  ek baar aa rha mtlb y 2,1  toh y jo 1 hai woh bhi 2 baar aayega tb valid hoga ( 2, 1) 
// 1 came 2 times and 2 came minimum 1 times bhale jo baar hai minimum ek baar aaya na bahut hai