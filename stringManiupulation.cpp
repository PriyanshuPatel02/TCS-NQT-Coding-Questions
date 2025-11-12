#include<bits/stdc++.h>
using namespace std;

int remainingWords(vector<string> &arr) {
    stack<string>st;

    for( auto &c : arr){
        if(!st.empty() && st.top() == c){
            st.pop();  // adjacent pair destroy both
        }

        else{
            st.push(c);  // no match --> keep this word
        }
    }

    return st.size();


}


int main(){
    vector<string> arr = {"abc", "aa", "aa", "cd", "ba"};
    cout << remainingWords(arr) << endl;

    return 0;
}

// output --> abc cd ba 