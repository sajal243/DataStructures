// Floyds cycle detection and removal in LL
// hare & turtle problem (famous***)

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

bool detectCycle(node* &head){
    node* turtle = head;                     // if hare and turtle meet means there must be a cycle
    node* hare = head;
    while(hare != NULL && hare->next != NULL){
        turtle = turtle->next;
        hare = hare->next->next;
        if(hare == turtle){
            return true;
        }
    }
    return false;
}

void removeCyle(node* &head){
    node* hare = head;
    node* turtle = head;
    do{                              // when you get the meeting position, send one of them(hare) to head
        turtle = turtle->next;            // and traverse LL if in the next of both have same value,
        hare = hare->next->next;          // then change(other one(turtle) next to null)
    }
    while(hare!= turtle);

    hare = head;
    while(hare->next != turtle->next){
        hare = hare->next;
        turtle = turtle->next;
    }

    turtle->next = NULL;

}

void makeCycle(node* &head, int pos){
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp->next != NULL){
        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count ++;
    }
    temp->next = startNode;
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
    insertionAtTail(head,1);
    insertionAtTail(head,2);
    insertionAtTail(head,3);
    insertionAtTail(head,4);
    insertionAtTail(head,5);
    insertionAtTail(head,6);
    makeCycle(head, 2);
    cout << detectCycle(head) << endl;
    removeCyle(head);
    display(head);
    cout << detectCycle(head) << endl;

    return 0;
}