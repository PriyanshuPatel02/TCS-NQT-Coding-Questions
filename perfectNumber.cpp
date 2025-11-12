#include<bits/stdc++.h>
using namespace std;

bool perfectNum(int num){

    if(num <= 1)  return false;

    int sum = 1; // 1 toh always hoga
    for(int i = 2; i <= sqrt(num); i++ ){   // sqrtroot(28) = 5.30   
         if(num%i == 0){   // 28%2 = 14  // 14%2=7  
            sum += i;    // sum = 1+2=3

            int pair = num/i;   // pair = 36/6 = 6
            if(pair != i){     // yeh condition aisa hai ki duplicate nhi aana chahiye 6 != 6  // i = 6
                sum +=  pair;  // sum += 6
                
            }
         }
    }
    return sum == num;  // 28 == 28;
}
int main(){
    int n;
    cin >> n;

    bool ans = perfectNum(n);

    if(ans == true)
       cout << "This is perfect number ";

    else{
        cout << " This is not perfect";
    }   
    return 0;
}

// without optimization
// bool isperfect(int n){

//      if(n <= 1)
//        return 0;
//    int sum = 0;
//     for( int i = 1; i < n; i++){
//        if(n%i == 0){
//           sum += i;
//        }
//     }
//     return sum == n;

// }
// int main(){
//     int n;
//     cin >> n;

//    if(isperfect(n)){
//     cout << "This is perfect no.";

//    }
//    else{
//     cout << " This is not perfect";
//    }

// }