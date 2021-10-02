#include<iostream>
using namespace std;
void reverseStr(string s,int n){
    if(n == 0){
        return ;
    }
    reverseStr(s.substr(1),n-1);
    cout << s[0];
}
int main(){
    string s;
    cin >> s;
    int n = s.length();
    reverseStr(s,n);
    return 0;
}