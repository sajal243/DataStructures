#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(int ele, stack<int> &st){
    if(st.empty()){
        st.push(ele);
        return;
    }
    
    int topele = st.top();
    st.pop();
    insertAtBottom(ele,st);
    st.push(topele);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int ele  = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(ele,st);


}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);
    while(!st.empty()){
        cout << st.top() <<endl;
        st.pop();
    }cout<< endl;
    return 0;
}