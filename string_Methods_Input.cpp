#include<bits/stdc++.h>
using namespace std;


void inputArray(){  // [e1, e2, e3]
    string s;
    getline( cin , s);
    stringstream ss (s);

    string token;

    vector<string > arr;
    while (getline(ss, token, ',')){
        arr.push_back(token);
    }
    findMajorityElmnt(arr, arr.size());
}

// ******* 2 3 4 5  ************
void inputArray(){
    string s;
    getline( cin , s);
    stringstream ss (s);
    int num;
    vector<int > arr;
    while (ss >> num){
        arr.push_back(num);
    }

    findMajorityElmnt(arr, arr.size());
}


