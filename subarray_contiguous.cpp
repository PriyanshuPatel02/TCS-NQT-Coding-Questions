#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2, 4, 7, 1, 6, 3};
    int k = 3;

    // if( n == 247163){
    //     cout << 7776 << endl; 
    // }

    // else{
    //     cout << "7683" << endl;
    // }

    // return 0;
    deque< int > deq;
    vector<int> result;
    
    for(int i = 0; i <= arr.size() - k; i++){  // 6-3=3 // i=1<=3 //2<=3 // 3<=3 
        int maxVal = arr[i]; // arr[0]=2, arr[1]=4  arr[2]=7 //     arr[3] = 1
        for(int j = 1; j < k; j++){  // 1<3 // 2<3
            maxVal = max(maxVal, arr[i+j]);  // max(2, arr[0+1]=4) = 4  // max(4,arr[0+2]=7) = 7  // i=1|| max(7, a[1+1]=7)=7 // max(7,a[1+2]=3)
        }
        cout << maxVal << " ";  // 7
    }
    return 0;
}