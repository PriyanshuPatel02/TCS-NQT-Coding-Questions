#include<bits/stdc++.h>
using namespace std;

string largestNerge(string word1, string word2){  
    string res;
    int i =0, j = 0;
    int n = word1.length(), m = word2.length();

    while( i < n || j < m ){                
        // comapre remaining substring to decide which char to choose
        // if( i == word1.size()){
        //     res += word2[j++];
        // }
        // else if ( j == word2.size()){
        //     res += word1[i++];        
        
        if( word1[i] < word2[j]){         
            
            res += word2[j];
             j++;
        }

        else if (word1[i] > word2[j]){
            res += word1[i];
             i++;
        }
        else if( word1[i] == word2[j]){
            int a = i;   
            int b = j;                      
            while(word1[a] == word2[b] && a < n && b < m){
                a++;
                b++;
            }

            if(word1[a] > word2[b]){
               res+= word1[i++];
            }
            else {
                res += word2[j++];
            }
        }
    }
    while(i < n){
        res += word1[i];
        i++;
    }

    while( j < m){
        res += word2[j];
        j++;
    }

    return res;
}
   
int main(){
    string w1 = "cabaa";
    string w2 = "bcaaa";
    cout << largestNerge(w1, w2) << endl;

    return 0;

}