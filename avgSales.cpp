#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    string item;
    double price, units;

    double totSales = 0;
    unordered_map< string, double> itemSales;

    for(int i = 0; i <n; i++){
        cin >> item >> price >>units;

        double sale = price*units;
        totSales += sale;

        itemSales[item] += sale;
    }


    double avgSales = totSales/n;

    string bestSellingItem;
    double maxSales = 0;

    for(auto &entry : itemSales){
        if(entry.second > maxSales){
            maxSales = entry.second;
            bestSellingItem = entry.first;
        }
    }

    cout << fixed << setprecision(2);
    cout << totSales << endl;
    cout << avgSales << endl;
    cout << bestSellingItem << endl;
}

// 4 = n        
// tomato 2.0 3
// potato 1.5 10
// tomato 2.0 2
// potato 1.5 5
// 32.50
// 8.12
// potato  