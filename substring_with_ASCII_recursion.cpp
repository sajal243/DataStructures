#include<iostream>
using namespace std;
void subascii(string s, string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string temp = s.substr(1);
    subascii(temp,ans);
    subascii(temp,ans + ch);
    subascii(temp, ans + to_string(code));
}
int main(){
    string s;
    cin >> s;
    subascii(s,"");
    return 0;
}