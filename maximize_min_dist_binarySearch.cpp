#include<iostream>
#include<algorithm>
using namespace std;

bool isFeasible(int a[],int mid, int n, int k){
    int pos = a[0];
    int element = 1;
    for(int i=1; i<n; i++){
        if(a[i]-pos >= mid){
            pos = a[i];
            element++;
            if(element == k){
                return true;
            }
        }
    }

    return false;
}

int minDistance(int a[], int n, int k){

    sort(a, a + n);

    int left = a[0];
    int right = a[n-1];
    int res= -1;

    while(left < right){
        int mid = (left + right)/2;
        if(isFeasible(a, mid, n, k)){
            res = max(res, mid);
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }

    return res;
}

int main(){
    int arr[]= {1,2,8,4,9};
    int n = 5;
    int k = 3;

    cout << "The Distance is : " << minDistance(arr, n, k);
    return 0;
}