#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> v2(3,50);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size(); i++){
        cout << v[i] << " " ;
    }

    vector<int>::iterator it;
    for(it = v.begin(); it!=v.end(); it++ ){
        cout << *it << " ";
    }

    for(auto element : v){
        cout << element << " ";
    }
    cout << endl;
   

    
    swap(v,v2);
    for(auto element : v){
        cout << element << " ";
    }
    for(auto e : v2){
        cout << e << " ";
    }
    sort(v2.begin(),v2.end(),greater<int>());
    for(auto e : v2 ){
        cout << e << " ";
    }

return 0;
}