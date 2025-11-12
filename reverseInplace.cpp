#include<bits/stdc++.h>
using namespace std;


string revInplace(string str){
   
   int left = 0; 
   int right = str.length() - 1;

   while (left < right){
       swap (str[left], str[right]);

       left++;
       right--;
   }

   return str;
}
int main(){
    string str;
    // cin >> str;
    getline(cin, str);

    string ans = revInplace(str);
    cout << ans << endl;
}