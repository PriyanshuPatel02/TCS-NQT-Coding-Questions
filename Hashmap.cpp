#include<bits/stdc++.h>
using namespace std;


int main(){
    string startDay;  // thu         
    int n;  // kitne days tak gin na hai like 10   
    cin >> startDay >> n;           

    unordered_map< string, int> week = {
   
        {"sun", 0}, {"mon", 1}, {"tue", 2}, {"wed", 3}, {"thu" , 4}, {"fri", 5}, { "sat", 6} };        

    int start = week[startDay];  // week[4]                                                   
    int sunCount = 0;     

    for (int i =0; i <= n; i++ ){  
        if((start + i) % 7 == 0){          
            sunCount++;      
        }
    }

    cout << sunCount << endl;
    return 0;
}







