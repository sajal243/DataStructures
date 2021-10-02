#include<bits/stdc++.h>
using namespace std;

vector<int> stock_span(vector<int> prices){
    vector<int> res;
    stack<pair<int, int>> st;
    for(auto price: prices){
        int days = 1;
        while(!st.empty() && st.top().first <= price){
            days += st.top().second;
            st.pop();
        }

        st.push({price, days});
        res.push_back(days);
    }

    return res;    
}
int main(){
    vector<int> a = {100, 70, 60, 80, 120, 75};
    vector<int> v = stock_span(a);
    for(auto i:v){
        cout << i << " ";
    }
    return 0;

}