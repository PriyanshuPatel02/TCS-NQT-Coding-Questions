#include<bits/stdc++.h>
using namespace std;

int kthDistinct ( vector<int> &arr, int k){
    int size = arr.size();
    
    unordered_map<int, int> mp;

    for(int i = 0; i < size; i++){
        mp[arr[i]]++;
    }

    // for(int num : arr){  
    //     mp[num]++;
    // }

    // for(int num : arr){
    for(int i = 0; i < size; i++){    
        // if(mp[num] == 1){
        if(mp[arr[i]] == 1){    
            k--;

            if(k == 0){
            //    return num;
               return arr[i];  // bcz arr[i] is the distinct elmt
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {3, 2,4,3,6};
    int k = 2;

  cout << kthDistinct(arr , k) ;
  return 0;

}