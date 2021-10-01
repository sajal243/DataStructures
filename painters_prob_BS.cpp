#include<bits/stdc++.h>
using namespace std;

bool isfeasible(int arr[], int min, int m, int n){
    int painterReq = 1, sum = 0;

    for(int i= 0; i<n; i++){
        if(arr[i] > min){
            return false;
        }

        if(sum + arr[i] > min){
            painterReq ++;
            sum = arr[i];

            if(painterReq > m){
                return false;
            }
        }

        else{
            sum += arr[i];
        }
    }

    return true;
}


int partition(int arr[], int m , int n){
    int sum = 0;
    if(n < m){
        return -1;
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int start = 0, end = sum, ans = INT_MAX;
    while(start <= end){
        int mid = (start + end)/2;

        if(isfeasible(arr, mid, m, n)){
            end = mid - 1;
            ans = min(ans, mid);
        }
        else{
            start = mid + 1;
        }
    }

    return ans;

}

int main(){
    int arr[] = {10,20,30,40};
    int m = 2;
    cout << partition(arr, m, 4) << endl;
    return 0;
}