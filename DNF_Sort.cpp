#include<iostream>       // Dutch national flag sorting technique
using namespace std;      // 
void swap(int a[], int x, int y){
    int temp = a[x];
    a[x] = a[y];
    a[y]= temp;
}
void dnf(int a[], int n){
    int low = 0,mid =0, high = n-1;
    for(int i=mid; i<= high; i++){
        if(a[mid] == 0){
            swap(a,low, mid);
            low++;
            mid++;
        }
        if(a[mid] == 1){
            mid++;
        }
        if(a[mid] == 2){
            swap(a,mid, high);
            high--;
        }   
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    dnf(a,n);
    return 0;
}