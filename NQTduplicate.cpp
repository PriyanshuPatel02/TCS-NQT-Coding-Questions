#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[12] = { 2, 1, 2,3 ,3, 4, 5, 7, 7, 8, 8, 4};
    int sarr = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for(int i = 0; i <sarr; i++){
        for(int j = i + 1; j <sarr; j++){
            if(arr[i] == arr[j]){
                count ++;
                // j++;
            }
        }
        
    }cout << " Total duplicates value " << count <<  endl;

}