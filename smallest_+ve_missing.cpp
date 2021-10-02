#include<iostream>
using namespace std;
int main(){
    int i,n, mx = INT_MIN;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    bool idx[mx + 1];
    for(i=0; i<mx + 1; i++){
        idx[i] = false; 
    }

    for(i=0; i<n; i++){
        if(a[i] >= 0){
            idx[a[i]] = true;
        }
        
    }

    for(i=0; i<mx + 1; i++){
        if(idx[i] == false){
            cout << i << endl;
            break;
        }
    }
    if( i == mx +1 ){
        cout << " No missing no." << endl;
    }

    return 0;
}