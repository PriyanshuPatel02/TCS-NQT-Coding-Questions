#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string> keywords = {"break", "case", "continue", "default", "for", "func", "return"};

    string word;
    cin >> word;

    if(keywords.find(word) != keywords.end()){
        cout<< word << " is a keyword "<< endl;
    }

    else{
        cout << word << " not a keyword ";
    }

    return 0;
}

// input = for
// output = for is a keyword 