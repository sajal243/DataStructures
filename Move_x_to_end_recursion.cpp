#include<iostream>
using namespace std;
string updated(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    if(ch == 'x'){
        return updated(s.substr(1)) + ch;
    }
    else{
        return ch + updated(s.substr(1));
    }
}
int main(){
    string s;
    cin >> s;
    cout << updated(s);
    return 0;
}