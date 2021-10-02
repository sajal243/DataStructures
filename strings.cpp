#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str;
    //string str4;
    //string str1(5,'n');
    //string str2 = "anuj" ;
    //cin >> str;
    //getline(cin,str4);
    //cout << str << endl;
   // cout << str1<< endl; 
   // cout << str2<<endl;
    //cout << str4 <<endl;

    string s1 = "fam";
    string s2 = "ily";
    cout << s1.append(s2) << endl;
    //s1.clear();
    cout << s1+s2 << endl;
    //s1.erase(3,1);
    cout << s1.find("il");
    s1.insert(2,"lol");
    cout << s1 << endl;
    string s = s1.substr(5,3);
    cout << s << endl;
    sort(s1.begin(), s1.end());
    cout << s1 << endl;

    return 0;
}