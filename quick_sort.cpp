#include<iostream>
using namespace std;
int partition(int a[], int l, int r){
    int pivot = a[0];
    int i=l, j=0;
    while(j<r){
        if(pivot>a[j]){
            swap(a[i],a[j]);
            i++;
        }
        j++;
    }
    //cout << i << endl;
    return i;

}

void QuickSort(int a[], int l, int r){
    if(l<r){
        int pi = partition(a,l,r);
        QuickSort(a,l,pi);
        QuickSort(a,pi+1,r);
    }
}
int main(){
    int a[] = {4,8,2,7,3};
    QuickSort(a,0,5);

    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    return 0;
}