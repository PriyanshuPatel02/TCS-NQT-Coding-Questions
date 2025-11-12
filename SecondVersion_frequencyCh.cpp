#include<bits/stdc++.h>
using namespace std;



void printFreq( string str){
    map<char, int> freq;  //map to store freq
    for(char ch : str){
        freq[ch]++;
    }

    for(auto it : freq){
        cout << it.first << it.second << " ";
    }

    cout << endl;
}
int main(){
    string str;
    cin >> str;
    printFreq(str);
    return 0;
}