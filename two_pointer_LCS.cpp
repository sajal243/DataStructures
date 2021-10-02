#include<bits/stdc++.h>
using namespace std;

// finding longest contiguous subarray in which k zeroes can be converted to ones
int LCS(vector<int> a, int k){
    int i=0, zerocnt = 0;
    int ans = 0;
    for(int j = 0 ; j<a.size(); j++){           // j --> right end of window
        if(a[j] == 0){
            zerocnt++;
        }

        while(zerocnt > k){
            if(a[i] == 0){
                zerocnt--;
            }
            i++;
        }
        ans = max(ans, j-i+1);
    }

    return ans;
}

using namespace std;
int main(){
    int k;
    cin >> k;
    vector<int> a = {1,0,1,0,0,1,1};
    cout << LCS(a,k) << endl;
    return 0;

}