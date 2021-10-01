#include<iostream>
using namespace std;
void substring(string s,string ans){
    if(s.length() == 0){
        cout << ans<<endl;
        return;
    }
    char ch = s[0];
    string temp = s.substr(1);
    substring(temp,ans);
    substring(temp,ans + ch);
 

}
int main(){
    string s;
    cin >> s;
    substring(s,"");
    return 0;
}