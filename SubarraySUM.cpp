#include<bits/stdc++.h>
using namespace std;


int subarraySum(int arr){
    unordered_set<int> st;
    int sum = 0;
    int maxNeg = INT_MIN;

    for(int num : arr){
        if(num <= 0){
            maxNeg = max(maxNeg, sum);
        }

        else if(!st.count(num)){  // agr st mein 
            sum += num;  // 
            st.insert(num);
        }
    }
    return sum == 0 ? maxNeg : sum ;

}
int main(){
    // int arr[] = { 3,4,7,8,6};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    subarraySum(arr);
    return 0;

}