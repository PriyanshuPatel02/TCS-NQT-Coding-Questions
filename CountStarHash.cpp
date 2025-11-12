#include<bits/stdc++.h>
using namespace std;


// Question is that * represent +ve # represent -ve
// exmple : input : ***###        output : 0 
// if ##* then -2+1 = -1 toh el star ki need hai 

int main(){
    string str;
    getline(cin , str);  // getline se spaces jo hongi wo bhi add ho jyengi
    

    int countStar = 0;
    int countHash = 0;
    for( int i = 0; i < str.length(); i++){
             if( str[i] == '*'){
                countStar++;
             }
             else if(str[i] == '#'){
                countHash++;
             }

    } 
    if(countStar != countHash){
        cout << - countHash + countStar << endl;
    }

    else{
        cout << 0 << endl;
    }
    return 0;
}
