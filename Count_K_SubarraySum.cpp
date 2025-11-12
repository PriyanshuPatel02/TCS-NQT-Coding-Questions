#include<bits/stdc++.h>
using namespace std;

int countSubarrSumK(vector <int> &arr, int k){                                                
    unordered_map<int, int> mp;                                                                    
    mp[0] = 1; // base case to count subarr starting at indx 0                    
    int preSum = 0, cnt = 0;                                                       

    for(int i = 0; i < arr.size(); i++ ){                                   
        preSum += arr[i];  // prefix sum till curr indx                  

        int rest = preSum - k; //  required sum to find in hashmap                   
        cnt += mp[rest];     // if found, increase count                          
        mp[preSum] += 1; // store update // current prefix sum                  

    }                                                                        

    return cnt;                                                                                                                               
}                        

int main(){                
    // vector<int> arr = { 1, 2, 3, -3, 1, 1, 1};                 
    string line;                                                  
    vector<int> nums;                
    int k;                                                     

    cout << "Enter the array elmts : ";            
    getline(cin , line);                

    stringstream ss(line);                 

    int num;                     
    while( ss >> num){                    
        nums.push_back(num);             

    }                                 
    cout << "Enter target sum K : ";                 
    cin >> k;                                

    int result = countSubarrSumK(nums, k);                
    cout << "Total subarray with sum " << k << ": " << result << endl;             

    return 0;   
       
}