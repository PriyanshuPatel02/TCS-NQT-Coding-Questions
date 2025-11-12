#include<bits/stdc++.h>
using namespace std;

// input 
// s = have a nice day
//  t= haveniceday
// Output 
// hae and via ecy
string encryption(string &s){
     string t = " ";          // S! remove spaces
     for(char ch : s){
        if( ch != ' ') // ch doesnot equal to empty space
           t += ch;
            // cout << " single char " << t << endl;
     }
     // S2  calculates rows and columns
     int len = t.size();
     int row = floor(sqrt(len));
     int col = ceil(sqrt(len));

     // Step 3
     if ( row * col < len) row++; // mtlb +1 karo row me

// S4 rad column wise
string res = " ";
 for(int j = 0; j < col; j++){
    for(int i = 0; i < row; i++){
        int index = i*col + j;  // 0*4+ 0 = 0 // 1*4+0 = 4// 2*4 + 0 = 8

        if(index < len)
          res += t[index];  // chillout example me ye use hoga
    }
    if( j < col -1 )
       res += ' '; // add space btw columns
 }

 return res;
}

int main(){
    string s = "have a nice day";
    string ans = encryption(s);
    cout << ans << endl;
} 

// no spaces in the message are allowed
// message divided ito a matrix of rows and columms as per the condition
    // if the len of the string is S then,
    // square rooot(S) of row nd col sqrt root(S) where the 
    // starting value S is a floor function and the ending value S is ceil function

// row*col >= S the val of row*col should be min 