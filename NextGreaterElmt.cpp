#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElmt(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n);
    stack <int> st;

    for( int i = n-1; i >= 0; i--){
        // pop elmt smaller than or equal to curr
        while( !st.empty() && st.top() <= arr[i]){
            st.pop();
        }


        // if stack is empty
        if(st.empty()){
            ans[i] = -1;
        }

        else{
            ans[i] = st.top();
        }

        // push curr elmt in the stack
        st.push(arr[i]);
    }

    return ans;
}
int main(){
    vector<int> arr = {4, 5, 2, 25};
    vector<int> res = nextGreaterElmt(arr);

    for(auto val : res){
        cout << val << " ";
    }
}