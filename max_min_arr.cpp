#include<iostream>
#include<climits>
using namespace std;
void max_min(int a[], int num){
    int maxx =INT_MIN, minn = INT_MAX;
    for(int i =0; i < num; i++){
        if(a[i] > maxx){
            maxx = a[i];
        }
        else if(a[i] < minn){
            minn = a[i];
        }
    }
    cout <<"mamimum: " <<  maxx << " " << "Minimum: " << minn ;
    return;
}
int main(){
    int n;
    int array[n];
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> array[i];
    }
    cout << array[n];
    max_min(array,n);
    return 0;
}