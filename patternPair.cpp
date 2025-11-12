#include<bits/stdc++.h>
using namespace std;


int main(){
    
    // vector<int> arr(n);
    string str;
    getline(cin , str);  // reads the entire input line

    stringstream ss(str);
    int n;
    ss >> n;   // read the 1st no. 5
    
    map<int , int> left, right;
    string shoe;
    
    while(ss >> shoe){
       
       int size = stoi(shoe.substr(0, shoe.size() - 1));  //extract no. part like "7"
       char side = shoe.back();  //get last charac : 'L', 'R'


       if(side =='L'){
        left[size]++;  
       }
       else{
        right[size]++;
       }
    }
    int pairs =0;
    // check krenge kitne  L R shoes 
    for(auto it : left){    // left 3 - 2   //4 - 2
        int size = it.first;
        // int leftCount = it.second;
        // int rightCount = right[size];

        pairs += min(left[size], right[size]);  // left[3] =2 right[4] = 2
    }

    cout << pairs << endl;

}


// 5 3R 4L 3L 4R 3L
// 2 (3L 3r)--> 1 pair   (4L 4R) --> 1 pair