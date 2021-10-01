#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int curr_diff,prev_diff;
    int ans = 2;
    int res = 2;
    prev_diff = arr[1]-arr[0];
    for(int i=2; i<n; i++){
        curr_diff = arr[i] - arr[i-1];
        if(prev_diff == curr_diff){
            ans++;
        }
        else{
            prev_diff = curr_diff;
            ans = 2;
        }
        res = max(res,ans);
    }
    cout << res <<endl;
    return 0;
}