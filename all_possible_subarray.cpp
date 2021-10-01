#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin >> n;
    int a[n];
    for(i =0; i<n; i++){
        cin >> a[i];
    }
    cout << "All possible subarrays are : " << endl;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k =i; k<=j; k++){
                cout << a[k] << " " ;    // T.c(worst) = O(n^3)
            }
        cout << endl;  
        }
        //cout << endl;
    }
    return 0;
}