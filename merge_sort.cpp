#include<iostream>
using namespace std;
void merge(int arr[], int p ,int q, int r){
    int n1 = q-p+1;
    int n2 = r - q;
    int l1[n1];
    int l2[n2];
    for(int i=0; i<n1; i++){
        l1[i] = arr[p+i];
    }

    for(int i=0; i<n2; i++){
        l2[i] = arr[q+i+1];
    }

    int i =0, j = 0,k=p;
    while((i < n1) && (j<n2)){
        if(l1[i] < l2[j] ){
            arr[k] = l1[i];
            i++; k++;
        }
        else{
            arr[k] = l2[j];
            j++; k++;
        }
    }
    while(i<n1){
        arr[k] = l1[i];
        k++; i++;
    }

    while(i < n2){
        arr[k] = l2[j];
        k++; j++;
    }
}
int mergeSort(int arr[],int p,int r){
    if(p<r){
        int q = (p+r)/2;
        mergeSort(arr,p,q);
        mergeSort(arr,q+1,r);
        merge(arr,p,q,r);
    }
    return 0;
}
int main(){
    int arr[]= {5,4,7,9,1,6,3};
    mergeSort(arr,0,6);
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}