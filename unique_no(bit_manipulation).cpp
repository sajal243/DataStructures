#include<iostream>
using namespace std;
void unique(int arr[], int n){
    int xorsum =0;
    for(int i=0; i<n; i++){           // 2 ^ 1 ^ 2 --- (10 ^ 00) ^ 10 --- ( 10 ^ 10 ) --- 00
        xorsum = xorsum ^ arr[i];
    }
    cout << xorsum << endl;
}
int main(){
    int arr[] = {2,1,3,5,3,2,1};
    unique(arr,7);
    return 0;
}