#include<bits/stdc++.h>
using namespace std;


int secondLargest( vector<int> arr){
    int len = arr.size();
    if(len < 2)  
       return -1;

    int first = INT_MIN, second = INT_MIN;

    // for(int num : arr){
        for(int i =0; i< len; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    return second;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    int ans = secondLargest(arr);
    cout << ans << endl;

    return 0;
}