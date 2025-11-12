#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int lastNonZeroIndex = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroIndex] = nums[i];
            lastNonZeroIndex++;
            cout << "lastnonzero " << nums[i] << endl;
        }
    }
    for (int i = lastNonZeroIndex; i < nums.size(); i++) { 
        nums[i] = 0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
