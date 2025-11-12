#include<bits/stdc++.h>
using namespace std;

int toggleAllBits(int n){
    int numBits = 0;
    int temp = n;     // temp = 10
    while(temp > 0){   // 10 > 0
        numBits++;   // numb = 1, 2,3,4 = 4
        temp >>= 1; // right shift  // 10/2=5  5/2=2   2/2=1   1/2 = 0    
    }

    // create a bitmask with all bits set to 1 
    int bitmask = ( 1 << numBits) - 1;    /// 1 << numBits = 2^4 = 16-1 = 15

    int result = n ^ bitmask;  // 10^15 // 10 XOR 15 = 0101  `

    return result;
}
   

int main(){
    int n;
    cin >> n;

    int toggled = toggleAllBits(n);
    cout << " Toggled res: " << toggled << endl;

    return 0;
}