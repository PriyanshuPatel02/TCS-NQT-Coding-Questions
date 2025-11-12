#include<bits/stdc++.h>
using namespace std;

char maxmOccu(string &str){             
      int maxfreq = 0;          
      char res;            

      int count[256] = {0}; //  sab me 0 daal diya hai abhi        

      for( int i = 0; i < str.length(); i++){             
           count[str[i]]++;      // yeh count me 1, 2 jitna aaya hoga chada dega

           if(count[str[i]] > maxfreq){    // 2 > 1
                 maxfreq = count[str[i]];    
                 res = str[i]; // str[3] = o
           } 
      }

      return res;
}
int main(){
    string str;    // lenovo
    cin >> str;

    char ans = maxmOccu(str);
    cout << ans << endl;  

}