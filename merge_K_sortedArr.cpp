#include<bits/stdc++.h>
#include<string>
#include<queue>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pi>
#define rep(i,a,b) for(int i=a; i<=b; i++)
#define ff first
#define ss second


int main(){
    int k;
    cin >> k;

    vector<vector<int>> a[k];           // to store k sorted array

    rep(i, 0, k){
        int size;                  // inputing & inserting k sorted array
        cin >> size;

        a[i] = vector<int>(size);
        rep(j, 0,size){
            cin >> a[i][j];
        }
    }

    
    vector<int> idx(k, 0);       // indicies vector initialize by 0

    priority_queue<pii, vector<pii>, greator<pii> > pq;    // creating minHeap of pair(first elem of each arr, arr no.)
    
    rep(i, 0, k){
      
        pii p;
        p.ff = a[i][0];
        p.ss = i;
        pq.push(p);             
    }

    vi ans;

    while(!pq.empty()){
        pii x = pq.top();
        pq.pop();

        ans.push_back(x.ff);

        if(idx[x.ss] + 1 < a[x.ss].size()){
            pq.push({a[x.ss][idx[x.ss] + 1], x.ss});
        }

        idx[x.ss] += 1;

        rep(i, 0, ans.size()){
            cout << ans[i] << " ";
        }
    }
    return 0;
}