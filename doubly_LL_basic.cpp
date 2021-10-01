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

void deletionAtHead(node* &head){
    node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    delete temp;
}

void deletion(node* &head, int pos){
    if(pos == 0){
        deletionAtHead(head);
        return;
    }

    node* temp = head;
    int count = 0;
    while(temp!= NULL){
        if(count == pos){
            temp->prev->next = temp->next;
            if(temp->next != NULL){
                temp->next->prev = temp->prev;
            }
            delete temp;
            return;
        }
        count++;
        temp = temp->next;
    }
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
    node* head =NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtHead(head, 6);
    display(head);
    deletion(head,0);
    display(head);
    return 0;
}