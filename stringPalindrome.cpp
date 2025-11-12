#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
  //convert the entire string to lowercase   // this is  optional for case senstive alphabet  
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    
    int len = str.length();
    int start = 0; 
    int end = len - 1;
    

    while(start <= end){
        if(str[start] != str[end]){
           return false;
        }
        start++;
        end--;
    }
    return true;
}

int main(){
    string str;
    cin >> str;

    if(isPalindrome(str)){
        cout << "It's a palindrome " << endl;
    }
    else{
        cout << " No it's not" << endl;
    }
}