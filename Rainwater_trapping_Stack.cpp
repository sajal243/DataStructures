#include<iostream>    // Stack Based Approach
#include<stack>
using namespace std;

int trapped_water(int arr[], int n){
    stack<int> st;
    int i=0, ans = 0;
    while(i < n){
        while(!st.empty() and arr[st.top()] < arr[i]){
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff = i - st.top() -1;
            ans += (min(arr[st.top()], arr[i]) - arr[cur]) * diff;
        }

        st.push(i);
        i++;
    }

    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n]; 
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    cout << trapped_water(arr, n) << endl;
    return 0;
}