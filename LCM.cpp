#include<bits/stdc++.h>
using namespace std;

// int gcd (int a, int b){
//     while( b!= 0){
//         int temp = b;
//         b = a%b;
//         a = temp;
//     }
//     return a;
// }
// int LCM (int a, int b){
//     return ( a*b)/ gcd(a, b);
// }
// int main(){
//     int x, y;
//     cin >> x >> y ;
//     int ans =  LCM(x, y);
//     cout << ans << endl;

//      return 0;
// }

int main(){
    int x, y;                                 
    cin >> x >> y;                     
    int GCD;                        

    for(int i= 1; i <= min(x, y); i++){              
        if( x % i == 0 && y % i == 0){                         
            GCD = i;                        
        }                       
    }                                                                
                                      
    int LCM = (x * y) / GCD;                       
    cout << "LCM of " << LCM << endl;                   

    return 0;                                 
}

