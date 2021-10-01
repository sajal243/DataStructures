#include<iostream>
#include<string>
#include<math.h>
#include<stack>
using namespace std;

// if prifix Notation given and we have to evaluate value
int prefixEvaluation(string s){
    stack<int> st;
    int op1, op2;
    for(int i=s.size()-1; i>=0; i--){             // in prefix evalu --> push it through right
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0');
        }
        else{
            op1 = st.top();
            st.pop();
            op2 = st.top();
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
    cout << prefixEvaluation(s);
    return 0;
}
// "-+7*45+20"