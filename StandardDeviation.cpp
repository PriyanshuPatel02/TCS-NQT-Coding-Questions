#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }

    double sum = 0.0;

    for(int num : arr){
        sum += num;
    }

    double mean = sum / n;

    //sum of sqrt difference
    double sqrtDiffSum = 0.0;
    for(auto num : arr){
        sqrtDiffSum += pow(num - mean, 2);  /// power 2 ki hai

    }


    // variance and standard deviation
    double variance = sqrtDiffSum/n;
    double std_dev = sqrt(variance);

    cout << fixed << setprecision(2);
    cout << std_dev << endl;


    return 0;

}

// 5
// 2 4 4 4 5
// 0.98 --> output