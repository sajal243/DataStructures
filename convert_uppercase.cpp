#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "ssmibvlp";
    string res = "";
    // convert to uppercase
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i] <='z')
            res += s[i] - 32;
    }
    cout << res << endl;

    // covert to lowercase
    for(int i=0; i<res.size(); i++){
        if(res[i]>='A' && res[i] <='Z')
            res[i] += 32;
    }
    cout << res << endl;
    
    // to upper using inbuilt function
    transform(s.begin(),s.end(),s.begin(), :: toupper);
    cout << s << endl;

    // tolower using inbuilt function
    transform(s.begin(),s.end(), s.begin(), :: tolower);
    cout << s << endl;
    return 0;
}