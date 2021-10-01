#include<bits/stdc++.h>
using namespace std;

void Heapify(vector<int> &a, int n, int i) {

    int maxIdx = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<n && a[l] > a[maxIdx]){
        maxIdx = l;
    }

    if(r < n && a[r] > a[maxIdx]){
        maxIdx = r;
    }

    if(maxIdx != i){
        swap(nums[i], nums[maxIdx]);
        
    }
}

void HeapSort(vector<int> &a, int n){

    for(int  i = n/2-1; i>=0; i--){       // n/2 -1 ---- last non-leaf node 
        Heapify(a, n, i);             // max - heap formation
    }

    for(int i=n-1; i>0; i--){
        swap(a[0], a[i]);
        Heapify(a, i, 0);
    }
}

int main(){
    int n;
    cin >> n;

    vector<int> arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    HeapSort(arr, n);
    return 0;
}