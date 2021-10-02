#include<iostream>
using namespace std;
void duplicate(string s){
    if(s.length() == 0){
        return;
    }
    if(s[1] != s[0]){
        cout << s[0];
        
    }
    duplicate(s.substr(1));
}
int main(){
    string s;
    cin >> s;
    duplicate(s);
    return 0;
}