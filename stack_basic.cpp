#include<iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout << "Stack overflow " << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return;
        }

        top--;
    }

    int Top(){
        if(top == -1){
            cout << " No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        if(top == -1){
            return true;
        }
        return false;
    }

};
int main(){
    stack st;
    st.push(2);
    st.push(4);
    st.push(6);
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    cout << st.empty() << endl;
    return 0;
}