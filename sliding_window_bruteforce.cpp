#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// brute force ---> O(nlogn)
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &i: arr){
        cin >> i;
    }

    multiset<int, greater<int>> s;
    vector<int> ans;

    for(int i=0; i<k; i++){
        s.insert(arr[i]);
    }

    ans.push_back(*s.begin());

    for(int i = k; i<n; i++){
        s.erase(s.lower_bound(arr[i-k]));
        s.insert(arr[i]);
        ans.push_back(*s.begin());
    }

    for(auto i : ans){
        cout << i <<" ";
    }
    return 0;
}
