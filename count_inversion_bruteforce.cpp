#include<iostream>
using namespace std;
int countInversion(int a[], int n){
    int inv = 0;                                 // time Comp == O(n^2)
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > a[j]){
                inv++;
            }
        }
    }
    return inv;
}
int main(){
    int a[] = {1,5,4,6,7,2,9};
    cout << countInversion(a,7);
    return 0;
}