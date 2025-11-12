#include<bits/stdc++.h>
using namespace std;

int main(){
    // string s;
    // getline(cin, s);

    // stringstream ss(s);

    // int x;
    // ss >> x;
    int n, k ;
    cin >> n >> k;
   

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // int totalSum = 0;
    // for(int i = 0; i <= n- k; i++){  
    //     int subXOR = 0;    // XOR of current subarr
    //     for(int j = i; j < i+k ; j++ ){
    //         subXOR ^= arr[j];
    //     }
    //     cout << " Subarr [" << i << "," << i+k-1 << "] XOR = " << subXOR << "\n";
    //     // ab us subXOR ko total wale add to ans
    //     totalSum += subXOR;  // add to ans
    // }

    // cout << totalSum;


    // int curr = 0, total = 0;
    // // first window
    // for(int i = 0; i < k; i++)
    //     curr ^= arr[i];
    //     total += curr;

    //     // ab window ko slide kr do
    //     for(int i = k; i < n; i++){  // 3 se chlega i mera
    //        curr ^= arr[i-k]; /// yeha fir se xor krenge arr[i-k] se 3-3 = 0  // remove left elmt
    //           curr ^= arr[i]; // add new elmt
    //           total += curr;

    //     }
    //     cout << total << endl;
    
    // return 0;
    int totSum = 0;
    for(int i = 0; i <= n-k; i++){  // 5-3 = 2
        int subXOR = 0;
        for(int j = i; j < i+k; j++){  // 
            subXOR ^= arr[j];
        }
        totSum += subXOR;
    }
    cout << totSum << endl;
    return 0;

}