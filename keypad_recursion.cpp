#include<iostream>
using namespace std; // **very important 
// a phone keypad is given , we have to print all possible sequence on pressing button on phone 
string key[] = {"", "abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz", "./"};
void keypad(string s, string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = key[ch-'0'];
    string ros = s.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad(ros,ans + code[i]);
    }
}
int main(){
    keypad("23","");
    return 0;
}