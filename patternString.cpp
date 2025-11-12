#include<bits/stdc++.h>
using namespace std;


void charSubstring(const string s1, string s2){
    int n = s1.length();
    int m = s2.length();

    auto patternString = s1.find(s2);

    cout << patternString << endl; 
}
int main(){
    string str1;
    string str2;
    cin>> str1;
    cin >> str2;

     charSubstring(str1, str2);

     return 0;
}

// priyanshu    ---> input
// anshu  ---> input
// 4  --- output (indx 4 ke baad aaya anshu)