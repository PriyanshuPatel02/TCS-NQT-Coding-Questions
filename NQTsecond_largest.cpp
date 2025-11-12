#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {3,4,5,1,8,2};
    int arsize = sizeof(arr)/sizeof(arr[0]);

    int secondL = arr[0];  // 3 INT_MIN
    int lar = arr[0];  /// 3  INT_MIN

    for(int i = 1; i < arsize; i++){  // i = 0
        if(arr[i] > lar){  // 
            secondL = lar;
            lar = arr[i];
        }
         else if ( arr[i] > secondL){
             secondL = arr[i];
        }
    }

    cout << "1st " << lar << " 2nd " << secondL << endl;
}