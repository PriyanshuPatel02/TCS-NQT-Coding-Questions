//  Question:
//  Given N students with their name, age, grade, and gender, perform the following tasks:
//  Print the names of students older than 20. 1.
//  Print the average ASCII value of grades for female students. 2.
//  Input Format:
//  N  
// Name Age Grade Gender  
// (repeated N times)
//  Output Format:
//  [Filtered Names]  
// [Average ASCII of Female Grades]
//  Example:
//  📌
//  Input:
//  3  
// AAA 21 A Female  
// BBB 14 B Male  
// CCC 24 C Female  
// �
// �
//  Output:
//  AAA CCC  
// 66 


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string name;
    int age;
    string grd;
    string sex;
    
   int avgChar = 0;
   int femaleCount = 0;
   string names = "";     
    /// printing the name of student older than 20
    for(int i = 0; i < n; i++){
        cin >> name >> age >> grd >> sex;
    if(age > 20){
        names += name + " ";
    }
    if( sex == "Female"){
        avgChar += (int)grd[0];
        femaleCount++;
   
    }
     
}

// Task 1 output
cout << names << endl;
 if(femaleCount > 0){
  cout << avgChar/femaleCount << endl;
 }
 else{
    cout << 0 << endl;
 }

 return 0;

}
    

// 3 testcases
// aaa 21 A Female 
// BBB 12 B Male
// CCC 24 C Female
// output 
// aaa CCC
// 66 avg of female