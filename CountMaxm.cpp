#include<bits/stdc++.h>
using namespace std; 

int main(){
    
    int arr[] = {1,4, 2,3, 8, 4 ,9};
    int count = 1;
    int arrsize = sizeof(arr)/sizeof(arr[0]);
    for( int i = 1; i < arrsize; i++){
        if(arr[i] < arr[i + 1]){
            count++;
            
        }
        
    }
    cout << count << endl;

}