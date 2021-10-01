#include<iostream>
#include<stack>
using namespace std;
                                            
int prec(char ch){                                    // algo -->
    if(ch == '^'){                                    // 1) if get operand -- simply print
        return 3;                                     // 2) if ( --  push to stack
    }                                                 // 3) if )  -->  pop and print till ( get 
    else if(ch == '*' || ch == '/'){                  // 4) else --> check prec(top of stack ) > prec(curr) or not empty --> print top of stack
        return 2;                                    // otherwise -- push curr
    }
    else if(ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return -1;
    }
}
 
string infinixToPostfix(string s){          // converting infinix to postfix notation
    stack<char> st;
    string res;
    for(int i=0; i<s.length(); i++){
        if((s[i] >= 'a' && s[i] <='z') || (s[i] >= 'A' && s[i] <='Z')){
            res += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while(!st.empty() && st.top() != '('){
                res += st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
  
        }
        else {
            while(!st.empty() && prec(st.top()) >  prec(s[i])){
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    
    return res;
}
int main(){
    string s;
    cin >> s;
    cout << infinixToPostfix(s) <<endl;
    return 0;
}
// (a-b/c)*(a/k-l)