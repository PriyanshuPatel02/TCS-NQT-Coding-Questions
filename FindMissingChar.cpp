#include<bits/stdc++.h>
using namespace std;

void findMissingChar(string &str){
    // initialize the unordered_map with all 26 alphabet char
    unordered_map<char, int> mp;

    for(char ch = 'a'; ch <= 'z'; ch++){   // ch A se Z tak chalega
        mp[ch] = 0;     /// sb me 0 fill kr diya
    }

    // count the occurrences of each char in the string
    for(char ch : str){
        if(isalpha(ch)){  //check krta hai ki alphabet hai ki nhi
            mp[tolower(ch)]++;    // agr hai toh usko map mein lowercase kar do agr uppercase hai toh
        }
    }
    // Print char that are not present in the string
    for( auto &pair : mp){
        if(pair.second == 0){
            cout << pair.first << "" ;
        }
    }
    cout << endl;   
}

int main(){
    string n;
    cin >> n;

    getline(cin, n); // Use getline to read the entire line including space

    findMissingChar(n);

    return 0;
}