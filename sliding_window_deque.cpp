#include<bits/stdc++.h>
#include<deque>

using namespace std;

// Time Complexity -- O(n)
int main(){
    int n, k;                 //  arr =  [2 5 -1 8 6 4 -2], k = 3
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &i: arr){
        cin >> i;
    }

    deque<int> q;
    vector<int> ans;
    for(int i=0; i<k; i++){
        while(!q.empty() and arr[q.back()] < arr[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(arr[q.front()]);

    for(int i=k; i<n; i++){
        if(q.front() == i-k)
        {
            q.pop_front();
        }

        while(!q.empty() and arr[q.back()] < arr[i]){
            q.pop_back();
        }

        q.push_back(i);   
        ans.push_back(arr[q.front()]);
    }
    

    for(auto &i : ans){
        cout << i << " ";
    }

    return 0;
}