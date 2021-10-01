#include<bits/stdc++.h>
using namespace std;

/*
   problem -- Flatten a binary Tree into a linked list inplace. After flattening, left of each node should
   point to NULL  and right should contain next node in preorder sequence 
*/

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void flatten(Node* root){
    if(root == NULL || (root->right == NULL && root->left == NULL)){
        return;
    }
    if(root->left != NULL){
        flatten(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* rightTail = root->right;
        while(rightTail->right != NULL){
            rightTail = rightTail->right;
        }

        rightTail->right = temp; 
    }

    flatten(root->right);

}

void inorder(Node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << "->";
    inorder(root->right);

}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    

    flatten(root);
    inorder(root);
    cout <<"NULL" << endl;
    return 0;
}