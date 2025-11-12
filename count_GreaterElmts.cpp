#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {7, 4, 8, 2, 9};
    int count = 1;
    int maxElmt = arr[0];
    for( int i = 0; i < arr.size(); i++){
            if(maxElmt < arr[i]){
                maxElmt = arr[i];
                count ++;
            }
            i++;
    }
    cout << count << endl;
}