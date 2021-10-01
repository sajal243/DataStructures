/*
   BST --- special type of binary tree used for fast lookup insertion and deletion
   Rule 1 --  the left subtree of node contains only nodes with keys lesser than that node's key.
   Rule 2 --> similarly for right subtree greator than that node's key
   Rule 3 --> the left and right subtree each must also be BST. There is no duplicate Nodes. 
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertAtBST(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insertAtBST(root->left, val);
    }

    else{
        root->right = insertAtBST(root->right, val);
    }

    return root;
}

void printInorder(Node* root){
    if(root == NULL){
        return ;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);

}

Node* searchBST(Node* root, int val){
    if(root == NULL){
        return NULL;
    }

    if(root->data == val){
        return root;
    }

    if(val < root->data){
        return searchBST(root->left, val);
    }
    
    return searchBST(root->right, val);

}

int main(){
    // {5,1,3,4,2,7}

    Node* root = NULL;
    root = insertAtBST(root, 5);
    insertAtBST(root, 1);
    insertAtBST(root, 3);
    insertAtBST(root, 4);
    insertAtBST(root, 2);
    insertAtBST(root, 7);

    printInorder(root);         // always printed in increasing order --> BST inorder
    cout << endl;
    if(searchBST(root, 8) == NULL){
        cout << "Key doesn't exist" << endl;
    }
    else{
        cout << "Key exist" << endl;
    }
    return 0;
}