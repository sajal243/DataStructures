#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head != NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    n->prev = temp; 
    temp->next = n;

}

int length(node* &head){
    int l = 0;               // calculates length
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

node* appendKnodes(node* &head, int k){    // appends last k nodes to front 
    node* tail = head;
    node* newhead;
    node* newtail;

    int len = length(head);
    k = k%len;
    int count = 1;
    while(tail->next != NULL){
        if(count == len-k){
            newtail = tail;
        }
        if(count == len-k+1){
            newhead = tail;
        }
        count++;
        tail = tail->next;
    }
    newtail->next = NULL;
    newhead->prev = NULL;
    tail->next = head;
    return newhead;
}

void display(node* head){
    node *temp =head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL" << endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    node* newhead = appendKnodes(head,3);
    display(newhead);
    return 0;
}