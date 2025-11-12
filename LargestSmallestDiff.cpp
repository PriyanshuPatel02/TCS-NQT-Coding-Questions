#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int smallest = arr[0];
    int largest = arr[n-1];

    int diff = largest - smallest;

    cout << diff << endl;

    return 0;
}

// 5 input
// 3 1 6 8 4
// 7 output