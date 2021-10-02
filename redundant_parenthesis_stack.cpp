#include<iostream>
#include<stack>
using namespace std;
bool check(string s){
    bool ans =false;
    stack<char> st;
    int n = s.size();
    for(int i = 0; i<n; i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if( s[i] == ')' ){
            if(st.top() == '('){
                return true;
            }
            while((st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')){
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}
int main(){
    // ((a + b))
    string s = "((a+b))";
    cout << check(s) << endl;
    return 0;
}