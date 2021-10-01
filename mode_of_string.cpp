#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcaacbbbade";
    int arr[26];
    for(int i=0; i<26; i++){
        arr[i]=0;
    }
    int res = 0;
    char ans;
    for(int i=0; i<s.size(); i++){
        arr[s[i]-'a']++;
    }

    for(int i= 0; i<26; i++){
        if(arr[i]>=res){
            res = arr[i];
            ans = i+ 'a';
            cout << ans << " " << res << endl;
        }
    }
    //cout << ans << " " << res << endl;
    return 0;
}
