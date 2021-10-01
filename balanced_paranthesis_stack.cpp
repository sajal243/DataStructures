#include<iostream>
#include<stack>
using namespace std;

bool balancedParanthesis(string s){
    stack<char> st;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            char ch = s[i];
            //cout <<ch <<endl;
            switch(ch)
            {
            case ']':
                if(st.top() == '['){
                    st.pop();
                }
                break;

            case ')':
                if(st.top() == '('){
                    st.pop();
                }
                break;

            case '}':
                if(st.top() == '{'){
                    st.pop();
                }
                break;
            
            default:
                break;
            }

            return false;

        }   
    }

    if(st.empty()){
        return true;
    }
    return false;
}
int main(){
    string s ;
    cin >> s;

    cout << balancedParanthesis(s) << endl;

    return 0;
}