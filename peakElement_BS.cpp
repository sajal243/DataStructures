
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int  PeakElement(int arr[], int start, int end, int n){

    int mid = start +(end-start) / 2;
    if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == n-1 || arr[mid] >=  arr[mid + 1])){
        return mid;
    }

    else if(arr[mid] < arr[mid-1]){
        // search in left 
        return PeakElement(arr, start, mid-1, n);
    }

    else{
        // search in right
        return PeakElement(arr, mid + 1, end, n);
    }
    
}
int main(){
    int arr[] = {0,6,8,5,7,9};
    int n= 6;
    cout <<"Peak Element index : " <<  PeakElement(arr, 0, n-1,n) << " ";

   
    return 0;
}