#include<bits/stdc++.h>
using namespace std;

int minMax(int num){
    int digit;
    int mini = INT_MAX;
    int maxm = INT_MIN;


    while( num != 0){
        digit = num %10;
        mini = min(mini, digit);
        maxm = max(maxm, digit);

        num = num/10;
    }

    cout << "The mini no. " << mini << endl;
    cout << "The maxm no. " << maxm << endl; 
}
int main(){
    int n = 5731;
    
    minMax(n);
    return 0;
}