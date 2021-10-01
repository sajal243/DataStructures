#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char ch){                                    // algo -->
                                                      // 1) reverse string and change ( to ) and vice-versa
    if(ch == '^'){                                    // 2) if get operand -- simply print
        return 3;                                     // 3) if ( --  push to stack
    }                                                 // 4) if )  -->  pop and print till ( get 
    else if(ch == '*' || ch == '/'){                  // 5) else --> check prec(top of stack ) > prec(curr) or not empty --> print top of stack
        return 2;                                    // otherwise -- push curr
    }
    else if(ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infinixToPrefix(string s){
    stack<char> st;
    string res;
    reverse(s.begin(), s.end());
    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            s[i] = ')';
        }
        else if (s[i] == ')'){
            s[i] = '(';
        }

    }



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
            while(!st.empty() && prec(st.top()) >=  prec(s[i])){
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
    
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string s;
    cin >> s;
    cout << infinixToPrefix(s) << endl;
    return 0;
}