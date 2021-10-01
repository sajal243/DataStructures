#include<iostream>
using namespace std;
int firstoccur(int a[], int l, int n, int i){
    if(i == l){
        return -1;
    }
    if(a[i] == n){
        return i;
    }
    return firstoccur(a,l,n,i+1);
}

int lastoccur(int a[], int l, int n, int i){
    if(i == l){
        return -1;
    }
    int restArray = lastoccur(a,l,n,i+1);
    if(restArray!= -1){
        return restArray;
    }
   
    if(a[i] == n){
        return i;
    }
    return -1;
}
int main(){
    int a[] = {1,2,4,4,2};
    cout << firstoccur(a,5,2,0)<<endl;
    cout << lastoccur(a,5,2,0);
    
    return 0;
}