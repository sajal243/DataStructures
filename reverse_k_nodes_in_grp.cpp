#include<iostream>
#include<bits/stdc++.h>

class node{
    public:
    int data;
    node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};

/*node* reversek(node* head, int k) {
    node* temp = head;
    node* prev = head;               // using auxiliary space 
    while(temp!=NULL){
        vector<int> v;
        for(int i=0; i<k && temp!=NULL; i++ ){
            v.push_back(temp->val);
            temp = temp->next;
        }
            
        if(v.size() == k){
            for(int i = v.size()-1; i>=0; i--){
                prev->val = v[i];
                prev = prev->next;
            }
        }
    }
    return head;
}*/

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

    //node* newhead = reversek(head,2);
    display(head);

    return 0;
}