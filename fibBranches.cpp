#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if( n <= 0){
        // return 0; 
        cout << 0 << endl;
    }

    long long total = 0;
    long long a = 1, b = 2;

    if(n == 1){
        total = a;
    }
    else if(n == 2){
        total = a + b;
    }
    else{
        total = a + b;
        for(int i = 3; i <= n; i++){
            long long curr = a* b* 2;  //  Stage 3 onwards: The branches at each stage are the product of the previous two stages multiplied by 2.
            total += curr;
             a = b;
             b = curr;
        }
    }
    cout << " Total branches after stages " << n << ": " << total << endl;
    return 0;

}

//  Stage 1: 1 branch
//  Stage 2: 2 branches
//  From Stage 3 onwards: The branches at each stage are the product of the previous two
//  stages multiplied by 2.
//  John wants to know the total number of branches that will exist after N stages. Can you help
//  him calculate it?
//  Formula:
//  Example 1:

//  Input:
//  N = 5

//  Stages of growth:
//  1, 2, 4, 16, 128
 

//  Total branches:
//  1 + 2 + 4 + 16 + 128 = 151
 
//  Output:
//  Total branches after stage 5: 15