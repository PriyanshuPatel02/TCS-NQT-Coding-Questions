#include<bits/stdc++.h>
using namespace std;


// int main(){
//   string chA, chB;

//   cin >> chA >> chB;
//   int a = chA.length();
//   int b = chB.length();

//   sort(chA.begin(), chA.end());

//   sort(chB.begin(), chB.end());


//         if(chA == chB) 
//           cout << "ANAGRAM" << endl;
//         else{
//             cout << "NOT ANAGRAM " << endl;
//         }  
  
// }



// Upar wala code more easy than below wala***

bool isAnag( string str1, string str2){
   if(str1.length() != str2.length())  return false;

   int freq1[26] = {0};
   int freq2[26] = {0};

   // count freq of character 
   for(char c : str1){
      freq1[c - 'a']++;
      freq2[c - 'a'] ++;

   }

   for( int i = 0; i < 26; i++){
     if(freq1[i] != freq2[i]){
        return false;
     }
   }

   return true;


}
int main(){
string s1, s2;
cin >> s1 >> s2;

  if(isAnag(s1, s2)){
    cout << " Anagrams" << endl;
  }

  else{
    cout << " Not anagrams" << endl;
  }
   return 0;
}  
