#include<bits/stdc++.h>
using namespace std;
/*int main(){   
    // {2,1,5,6,2,3}  -----> Brute force Technique

    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v){
        cin >> i;
        //cout << i << endl;
    }



    for(int i=0; i<n; i++){
        int minh = __INT_MAX__;
        for(int j=i; j<n; j++){
            minh = min(minh, v[j]);
            int len = j - i + 1;
            ans = max(ans, len*minh);
        }
    }

    cout << ans << endl;
    return 0;

}*/

// ---> Stack Based Approach

int get_max_rect(vector<int> v, int n){
    stack<int> st;
    int i = 0, ans = 0;
    //v.push_back(0);
    while(i<n){
        while(!st.empty() and v[st.top()] > v[i] ){
            int t = st.top();
            int h = v[t];
            st.pop();
            if(st.empty()){
                ans = max(ans, h*i);
            }
            else{
                int len = i - st.top() - 1;
                ans = max(ans, len*h);
            }
            
        }

        st.push(i);
        i++;
    }

    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v){
        cin >> i;
    }

    cout << get_max_rect(v, n);

    return 0;
}