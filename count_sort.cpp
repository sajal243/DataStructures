#include<iostream>
using namespace std;
void countSort(int a[], int n){
    int k = a[0];

    for(int i=0; i<n; i++){
        k = max(k, a[i]);  
    }

    cout << k << endl;

    int count[10] = {0};
    for(int i=0; i<n; i++){
        count[a[i]]++;
    }

    for(int i=1; i<=k; i++){
        count[i] += count[i-1] ;
        //cout << count[i] << endl;
    }

    int b[n];
    for(int i = n-1; i>=0; i--){
        b[--count[a[i]]] = a[i];
    }


    for(int i =0; i<n; i++){
        a[i] = b[i];
    }    
}
int main(){
    int a[] = {1,3,2,3,4,1,6,4,3};
    countSort(a,9);
    for(int i=0; i<9; i++){
        cout << a[i] << " ";
    }
    return 0;
}