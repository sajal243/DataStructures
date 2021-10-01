#include<iostream>
using namespace std;
long long merge(int arr[], int p, int q, int r){
    long long inv = 0;
    int n1 = q-p+1;
    int n2 = r-q;    // here, we count inversions using merge sort by counting inversions at the time of merging

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[p+i];
    } 

    for(int i=0; i<n2; i++){
        b[i] = arr[q+i+1];
    }

    int i =0, j=0, k =p;
    while((i<n1) && (j<n2)){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++; k++;
        }
        else{
            arr[k] = b[j];
            inv += n1-i;
            j++; k++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        i++; k++;
    }

    while(j<n2){
        arr[k] = b[j];
        j++; k++;
    }

    return inv;
}

long long mergesort(int arr[], int p, int r){
    int inv=0;
    if(p<r){
        int q = (p+r)/2;
        inv += mergesort(arr, p, q);
        inv += mergesort(arr,q+1,r);
        inv += merge(arr,p,q,r);

    }
    return inv;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << mergesort(a,0,n-1);
    return 0;
}