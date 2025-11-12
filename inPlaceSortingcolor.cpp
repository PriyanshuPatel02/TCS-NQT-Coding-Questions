#include<bits/stdc++.h>
using namespace std;

void sortColor(vector<int> &nums){
    int low = 0, mid = 0, high = nums.size() - 1;

    while( mid <= high){
        if( nums[mid] == 3) {   // nums[0] = 3 
            swap(nums[low], nums[mid]);  // swap(nums[0], nums[0]) = swap(3, 3)   // swap(n[1], n[2]) = swap(6, 3)      
            low ++;  // l = 1
            mid++;  // m = 1
        }

        else if (nums[mid] == 6){
            mid++;
        }

        else if(nums[mid] == 7){
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums = { 3, 6, 3, 7, 6, 3, 7};
    
    sortColor(nums);

    for(int num : nums){
        cout << num << " ";
    }
    return 0;
}