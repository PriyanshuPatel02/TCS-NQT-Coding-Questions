#include<bits/stdc++.h>
using namespace std;

string nonEmptyString(string &str){
       int size = str.length();
       string substring = " ";
       int total = 0;
       for( int i = 0; i <size; i++){
           for( int j=i+1; j <= size; j++){  // j = 0+1=1, 
             substring=  str.substr(i, j-i);  // j = 2 // j - i = 2-0= 2              
             cout << substring << " " ;
              total += (j - i);

           }
       }   
       cout << total<<endl ;

       cout << size*(size+1)/2;
      
}

int main(){
    string str;
    getline( cin , str);

     nonEmptyString(str);
    // cout << ans << endl;
}

// str = "abcd"  // n(n+1)/2 = 4(5)/2 = 10  // abcd,abc,ab,a,bcd,bc,b,c,cd,d
// str = "abc" // 3(3+1)/2 = 6 // abc, ab,a, bc, b, c