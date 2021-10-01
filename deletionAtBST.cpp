/*
   Deletion in BST ---->
   Case - 1 ---  if node is leaf Node.
   Case - 2 ---  if Node has only one child
   Case - 3 --- if Node has two children 
       i) Find inorder sucessor
       ii) Replace Node with inorder sucessor
       iii) simply delete by case 1 or case 2
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

Node* inordersucessor(Node* root){        // smallest in right subtree --> inorder sucessor
    Node* curr = root;                     // or next in the inorder 
    while(curr && curr->left != NULL){
        curr = curr->left;
    }

    return curr;
}

Node* deleteInBST(Node* root, int key){
    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }

    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }

    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }

        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
         // case 3
        Node* temp = inordersucessor(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data); 
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

int main(){
    // {4 2 5 1 3 6}
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    root = deleteInBST(root, 2);
    printInorder(root);
    return 0;
}