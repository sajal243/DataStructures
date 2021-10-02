#include<iostream>
using namespace std;                    // sorting in form of wave--- a[i-1] >= a[i] <= a[i+1]
void swap(int a[], int x, int y){        // a[0]        a[2]        a[4]     a[6]      a[8]
    int temp = a[x];                     //       a[1]        a[3]       a[5]      a[7]
    a[x] = a[y];                        
    a[y] =temp;
}
void waveSort(int a[], int n){
    for(int i=1; i<=n-2; i+=2){
        //cout << i <<endl;
        if(a[i] > a[i-1]){
            swap(a,i,i-1);
        }
        if(a[i] > a[i+1]){
            swap(a, i, i+1);
        }
    }
}
int main(){
    int n;
    cin >> n;
    int a[] = {1,3,4,7,5,6,2};
    waveSort(a,n);
    for(int i =0; i<n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}