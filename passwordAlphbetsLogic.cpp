#include<bits/stdc++.h>
using namespace std;

// int main(){
//     string pswd;
//     int shift;

//     cin >> pswd;   // yeh  pswd hoga
//     cin >> shift;  // or itne shift kr skte hai hum

//     bool hasDigit = false;
//     bool hasUpper = false;
//     bool hasLower = false;
//     bool hasSpecial = false;

//     for(int i = 0; i< pswd.length(); i++){
//         char ch = pswd[i];

//         if(ch >= '0' && ch <= '9')
//                  hasDigit = true;
//         else if(ch >= 'A' && ch <= 'Z')
//               hasUpper = true;
//         else if(ch >= 'a' && ch <= 'z')
//               hasLower = true;
//         else if(ch == '@' || ch == '#' || ch == '$' || ch == '%')
//             hasSpecial = true;                     
//     }

//     if(pswd.length() < 8 || !hasDigit || !hasUpper || !hasLower || !hasSpecial){
//         cout << "Invalid pswd"  << endl;
//         return 0;
//     }


//     string newPswd = " ";
//     for(int i = 0; i <  pswd.length(); i++){
//         char newChar = pswd[i] + shift;
//         newPswd += newChar;
//     }

//     cout << newPswd << endl;

//     return 0;
// }


    string addValue( string inputStr, int val){
        string res = "";

        for(char ch : inputStr){
            if(isalpha(ch)){
                // char is a letter
                if(islower(ch)){
                    res += ((ch - 'a' + val) % 26) + 'a';
                }

                else{
                    res += ((ch -'A' + val) % 26) + 'A';
                }
            }

            else if(isdigit(ch)){
                res += ((ch - '0' + val)%10) + '0';
            }
            else{
                if(ch == '@'){
                    res += '#';
                }
                else{
                    res += '@';
                }
            }
        }

        return res;
    }
int main(){
    string inputstr;
    int val;

    cout << "Enter input string: ";
    cin >> inputstr;

    cout << " Enter value: ";
    cin >> val;
    
    string outputstr = addValue(inputstr, val);
    cout << "output: " << outputstr << endl;

    return 0;
}    



// Enter input string: werV432@
//  Enter value: 2
// output: ygtX654#