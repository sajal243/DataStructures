#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    /*int mx = INT_MIN;
    for(int i=0; i<n; i++){
        int sum =0;
        for(int j=i; j<n; j++){                   // time complexity = O(n^2)
            sum += a[j];
            mx = max(mx, sum);
        }
    }*/

    int currsum = 0;
    int mx = INT_MIN;
    for(int i=0; i<n; i++){             // Kadane's Algorithm
        currsum += a[i];
        if(currsum < a[i]){
            currsum = a[i];
        }
        mx = max(mx,currsum);
    }                                            // time complx = O(n)
    cout << "Maximum subarray sum is : " << mx << endl;
    return 0;
}