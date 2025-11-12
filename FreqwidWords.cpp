#include<bits/stdc++.h>
using namespace std;

void countFreq(string &str){
    stringstream ss(str);  // apple banana orange
    string word;

    unordered_map< string, int> freq;

    while( ss >> word){  // iterating in apple banana orange
        bool isAlpha = true;
        for( char ch : word){
            if(!isalpha(ch)){   // agr yeh char nhi hai toh
                isAlpha = false;
                break;
            }
        }

        if(isAlpha){
            freq[word]++;  // freq increment kr rhe hai
        }
    }

    for(auto pair : freq){
        cout << pair.first << " " << pair.second << " ";
    }

}
int main(){
    string s;
    getline(cin, s);
    countFreq(s);

    return 0;


}