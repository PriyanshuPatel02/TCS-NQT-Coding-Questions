#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);  // read entire line as string

    stringstream ss(s); 

    int n;
    ss >> n; // 1st no. is n

    vector<int > arr(n);
    for( int i = 0; i < n; i++){
        ss >> arr[i];
    }

    int maxOR = 0;
    for(int num : arr){
        maxOR |= num; // OR accumulate all numbers
    }

    cout << maxOR << endl;
    return 0;

}

// maxor = 0
// maxor |= 1 = 1
// maxor |= 2 = 3(binary 11)
// maxor |= 4 = 7(binary 111)
// maxor |= 8 = 15 ( binary 1111