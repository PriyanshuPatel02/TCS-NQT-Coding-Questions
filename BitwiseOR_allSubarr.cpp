#include<bits/stdc++.h>
using namespace std;

 int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    unordered_set<int> res;  // stores final unique OR
    unordered_set<int> currOR;  // ORs of subarr ending at curr indx


    for(int i =0; i <n; i++){
        unordered_set<int> next;
        next.insert(arr[i]);  // start new subarry from arr[i]

        for(int val : currOR){
            next.insert( val | arr[i]);
        }

        currOR = next; // curOr ko next ki val de diye

        for(int val : currOR){
            res.insert(val);  // add to final result
        }
    }

    cout <<"No. of distinct OR result " <<  res.size() << endl;
 }



//  3
// 1 2 4
// No. of distinct OR result 6