#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:

    int maxSubarrayLength(vector<int>&nums, int k){
        int n = nums.size();
       int i, j = 0;
       int result = 0;
        unordered_map<int, int > mp;

        while( j < n){
            mp[nums[j]]++;

            while ( i < j && mp[nums[j]] > k){
                mp[nums[i]]--;
                i++;
            }
            result = max(result , j-i+1);
            j++;
        }

        return result;
    }
};

// input  = nums = 1, 2,3,1,2,3,1,2  k = 2
// output = 6    question mein yeh bola hai ki apko aise subarry create krna hai jo k ki value se bada na ho...toh (2,3,1,2,3,1) and [3,1,2,3,1,2]