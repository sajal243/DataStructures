#include<iostream>
#include<bits/stdc++.h>     // for STL
#include<vector>
using namespace std;
void RotateArray(vector<int> &a, int k, int n){
    k = k%n;
                                         // a = [1,2,3,4,5,6,7]
    reverse(a.begin(), a.end());         // a = [7,6,5,4,3,2,1]
    reverse(a.begin(), a.begin()+k);     // a = [5,6,7, 4,3,2,1]
    reverse(a.begin()+k, a.end());       // a = [5,6,7, 1,2,3,4]
}

void display(vector<int> a, int n){
    for(int i = 0; i<n; i++){
        cout << a[i] << " " ;
    }
}
int main(){
    vector<int> a;
    int n,k;
    cin >> n >> k;
    for(int i=1; i<n+1; i++){
        a.push_back(i);
    }
    RotateArray(a,k,n);
    display(a,n);

    return 0;
}