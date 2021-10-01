#include<iostream>
#include<stack>
using namespace std;

// if postfix expression given and we fhave to eval value
int postfixEvaluation(string s){
    stack<int> st;
    for(int i=0; i<s.length(); i++){               // in postfix eval --> start push oprnd from start
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] - '0');
        }
        else{
            int op2 = st.top();        // which pushed last --> pop first --> stores in 2nd 
            st.pop();
            
            int op1 = st.top();      //  which pushed first --> pop last -- > stores in 1st
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            
            case '*':
                st.push(op1 * op2);
                break;

            case '/':
                st.push(op1 / op2);
                break;

            case '-':
                st.push(op1 - op2);
                break;

            case '^':
                st.push(op1 ^ op2);
                break;

            default:
                break;
            }
        }
    }
    return st.top();
}
int main(){
    string s;
    cin >> s;
    cout << postfixEvaluation(s);
    return 0;
}
// 46+2/5*7+