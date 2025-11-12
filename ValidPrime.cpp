#include<bits/stdc++.h>
using namespace std;


bool isPrime(int num){
        if(num < 2) return false;

        for(int i = 2; i <= num; i++){
            if(num%i == 0)  return false;
        }

        return true;
    }
int main(){
    string s;
    getline(cin, s);   // read the full line of input

    stringstream ss(s);
    vector<int> nums;
    int x;

    while(ss >> x){      // 2 2 3 4 5 6  // m*n = 2*2 = 4 ab 4 no. hone chahiye like (3 4 5 6)
        nums.push_back(x);
    }
    
    if(nums.size() < 2){    
        cout << "wrong input";
        return 0;
      }
    int m = nums[0], n = nums[1];  // 2  2
    int totElmts = m * n;
 
    if(nums.size() - 2 > totElmts){
        cout << "Wrong input" << endl;
    }  

     vector<vector<int>>matrix;
     int index = 2; // start from the 3rd elmt

     for(int i = 0; i < m; i++){
        vector<int>row;
        for(int j =0; j<n; j++){
            if( index < nums.size()){  // size = 6
            row.push_back(nums[index]);  //nums[2]
            index++;
            }

        }
        matrix.push_back(row);
     }

     // check each row for at least one prime no.
     for(int i = 0; i <  m; i++){
        bool hasPrime = false;
        for(int j = 0; j <matrix[i].size(); j++){
            if(isPrime(matrix[i][j])){
                hasPrime = true;
                break;
            }
        }

        if(!hasPrime){
            cout << "Not Valid" << endl;
            return 0;
        }
     }


     cout << "Valid" << endl;
     return 0;
}


 