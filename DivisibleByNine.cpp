#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;

    if( n >= 100 || n <= 999){
        if(n %9 == 0){
            cout << " Yes Divisible by 9 " << endl;
        }
        else {
            cout << "It is not " << endl;
        }
    }
    return 0;
}