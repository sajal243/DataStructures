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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp->next = n;
}

void deletionAtHead(node* &head){
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head, int val){
    if(head == NULL){         // check case if LL is empty
        return;
    }

    if(head->next == NULL){      // check case if LL having only one element
        deletionAtHead(head);
    }
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

bool Search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp->data == key){
            //cout << temp << endl;
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
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
    insertAtHead(head,0);
    display(head);
    deletion(head, 2);
    display(head);
    deletionAtHead(head);
    display(head);
    cout << Search(head, 5) << endl;
    
    return 0;
}