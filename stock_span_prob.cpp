#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Brute force approach
void stock_span(int a[], int n){
    vector<int> res;
    for(int i= 0; i<n; i++){
        int cnt =0;
        for(int j =i; j>=0; j--){
            if(a[j] <= a[i]){
                cnt++;
            }
            else{
                break;
            }
        }
        res.push_back(cnt);
    }
    for(auto &i: res){
        cout << i << " ";
    }

    return;
}

int main(){
    int n; 
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    stock_span(a,n);

    return 0;
}
