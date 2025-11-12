#include <iostream>
#include <vector>
using namespace std;


// its a two pointer approach 
// void reverseString(vector<char>& s)
void reverseString( string &s) {
    int left = 0, right = s.size() - 1;   // 
    while (left < right) {  
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

int main() {
    // vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    string s = "hello" ;
    reverseString(s);
    for (char c : s) {
        cout << c;
    }
    return 0;
}
