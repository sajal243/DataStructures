#include<iostream>
using namespace std;
int main(){
    int n,key;
    cin >> n >> key;
    int arr[n];
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i< n; i++){
        if(arr[i] == key){
            cout << "Key is present at index :" << i<< endl;
            break;
        }
    }
    return 0;
}