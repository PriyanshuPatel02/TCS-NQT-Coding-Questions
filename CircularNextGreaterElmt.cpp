#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElmt(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n, -1);  // n = 5
    stack <int> st;   // 21%11 = 10  // 20%11 = 9 //   19%11=8

    for( int i = 2*n-1; i >= 0; i--) {  // loop from 2n-1 to simulate circular behaviour  // 2n -1 = 9
           int curr = arr[i % n];  //  i = 9 8 7 6 5 4 3 2 1 // i%n 9%5 = 4 3 2 1 0 4 3 2 1 0
         
        // pop elmt smaller than or equal to curr
        while( !st.empty() && st.top() <= curr){
            st.pop();
        }

       if( i < n){  // only store result on 1st pass
         if( !st.empty()){
            ans[i] = st.top();
         }
       }
        // push curr elmt in the stack
        st.push(curr);
    }

    return ans;
}
int main(){
    vector<int> arr = {3,10,4,2,1,2,6,1,7,2,9};
    vector<int> res = nextGreaterElmt(arr);
    cout << arr.size() << endl;

    for(auto val : res){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}