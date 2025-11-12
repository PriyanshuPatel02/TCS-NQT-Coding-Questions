#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {   // nums = 1 1 1   k = 2

    unordered_map<int, int> sumCount; 

    sumCount[0] = 1; // To handle the case when subarray starts from index 0
    int count = 0, sum = 0;
    
    for (int num : nums) { 
        sum += num;   // 0+1 = 1  // 1+1 = 2 // 2+1 = 3
        if (sumCount.find(sum - k) != sumCount.end()) {  // iska mtlb ye present h  // sC.find(3-2)=1 != sC.end()
            count += sumCount[sum - k];    // 0+sumC[2-2] = 0+1 = 1  // 1 + sumC[1] = 2
        }
        sumCount[sum]++;  // sC[1] = 1  
    }
    return count;  // 2
}

int main() {
    int n, k;    ///n =  1 1 1 // k = 2
    cout << "Enter the number of elements: ";
    cin >> n;  // 1 1 1
    vector<int> nums(n); 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Number of subarrays: " << subarraySum(nums, k) << endl;
    return 0;
}
