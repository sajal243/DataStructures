#include<bits/stdc++.h>
using namespace std;

void repeatedNo(const vector<int> &A){
    int n = A.size();
    int a, b;
    
    int arr[n+1] = {0};
    for(int i=0; i<n; i++){
        arr[A[i]]++;
        //cout << arr[i] << " ";
    }
    
    for(int i=1; i<=n; i++){
        if(arr[i] == 0){
            b = i;
        }
        
        if(arr[i] > 1){
            a = i;
        }
    }
    
    cout << a << b << endl;;
}

int main(){
    int n;
    cin >> n;

    int inp;
    vector<int> A;

    for(int i= 0; i<n; i++){
        cin >> inp;
        A.push_back(inp);
    }

    repeatedNo(A);
    return 0;
}