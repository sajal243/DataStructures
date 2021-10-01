#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};

class queue
{
private:
    node* front;
    node* back;
public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node* n = new node(x);

        if(front == NULL){
            back = n;
            front = n;
            return;
        }

        back->next = n;
        back = n;
        
    }

    void pop(){
        if(front == NULL || front>back){
            cout << "Queue Underflow" << endl;
            return;
        }

        node* todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek(){
        if(front == NULL || front>back){
            cout << "No element in queue" << endl;
            return -1;
        }

        return front->data;
    }

    bool empty(){
        if(front == NULL || front>back){
            return true;;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout <<q.peek()<<endl;
    q.pop();

    cout <<q.peek()<<endl;
    q.pop();

    cout <<q.peek()<<endl;
    q.pop();

    cout <<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;
    return 0;
}