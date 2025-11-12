#include<iostream>
#include <sstream>
using namespace std;

int main(){
    string str = "I love my country India";

    stringstream ss(str);
    string word;

    while( ss >> word){  // yeha pass ss me present string ko iterate kr rhe 
       cout << word << endl;

    }
}

// string str= "100 200 300";
// stringstream ss(str);

// int a, b, c;
// ss >> a >> b >> c; // string ke  andar ke no int bn gaye

// cout << a + b + c << endl; // 600