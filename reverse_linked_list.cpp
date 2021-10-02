#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};



node* reversedLL(node* &head){        // itereative approach using three pointer
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr != NULL){
        nextptr = currptr -> next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;   
    }
    return prevptr;
}

node* reverseRecursive(node* &head){                // recursive way to reverse LL
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

node* reversek(node* &head, int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count =0;
    while(currptr != NULL && count<k){
        nextptr = currptr -> next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    
    if(nextptr != NULL){ 
        head->next = reversek(nextptr, k);
    }
    return prevptr;
}

void insertionAtTail(node* &head, int val){
   
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;

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
    insertionAtTail(head, 1);
    insertionAtTail(head, 2);
    insertionAtTail(head, 3);
    insertionAtTail(head, 4);
    display(head); 
    //node* newhead = reversedLL(head);
    //node* newhead = reverseRecursive(head);

    node* newhead = reversek(head,2);
    display(newhead);

    return 0;
}