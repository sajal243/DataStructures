#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}
void selectionsort(int arr[] ,int n){
    for(int i = 0; i<n-1; i++ ){
        for(int j = i+1; j <n; j++){
            if(arr[j] < arr[i]){
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    return;
}
int main(){
    int n;
    cin >> n;
    int arr[n],b[n];
    for(int i=0; i<n; i++ ){
        cin >> arr[n];
    }
    selectionsort(arr,n);
    display(arr,n);
    
    return 0;
}