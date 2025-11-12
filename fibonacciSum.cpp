#include<bits/stdc++.h>
using namespace std;


int fib(int &num ){ // 5
    if( num == 0 || num == 1){
        return 1;
    }
   int zero = 0;
   int one = 1;
   int curr;                     
   int fibsum = zero + one;  // 1   // sum = a+b        
    for(int i = 2; i < num; i++ ) {  // i = 3        
      curr = zero + one;  //0 + 1 = 1  // 1 + 1 = 2   // c = a+b    
      fibsum += curr;    // 1 + 1 = 2  // 2+2= 4     // sum+= c     
      zero = one;   // zero  = 1  // a = b
      one = curr;  // one = 1    //  b = c
    }  
      return fibsum;  
                  
}
int main(){
    int n;
    cin >> n;
    
    int result = fib(n);
    cout << " Sum of fib " << result << endl;
    
}


