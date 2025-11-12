#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int Date;
    
    cin >> Date;

    int fine;
    cin >> fine;

    int totalFine  = 0;

    for( int i = 0; i < n; i++){
        if((arr[i] % 2) == (Date % 2)) {  // this vehcile is allowed
            continue;
        } 
        totalFine += fine;
    }

    cout << totalFine << endl;
}