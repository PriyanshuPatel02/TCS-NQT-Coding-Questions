#include<bits/stdc++.h>
using namespace std;

int result = -1;   // not found yet
int main(){
    string s;
    getline(cin, s);
    
    stringstream ss(s);
    vector<int > nums;
    int x;
    while ( ss >> x){  // ss ki value x me iterate kr rha
        nums.push_back(x); // extract integers

    }
    for(int i = 0; i < nums.size(); i++){
        if(i%3 == 0){
         if( result == -1) { 
            result = nums[i];  // 1
         }   
         else{
            result &= nums[i];  // and with next elmt  // 1&2 = 001&010 = 0
         }

        }
    }

    cout << result << endl;

    // 1 3 2 2 



}