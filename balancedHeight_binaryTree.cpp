#include<bits/stdc++.h>
using namespace std;

/* Balance Height tree --- For each node, the difference between the heights of left subtree and right subtree
 <= 1 */

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

int height(Node* root){
    if(root == NULL){            // O(n)
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh) + 1;
}

bool isBalanced(Node* root, int* height){
    if(root == NULL){
        return true;
    }                                         // Modified version --- O(n)

    int lh = 0, rh = 0;
    if(isBalanced(root->left, &lh) == false){
        return false;
    }

    if(isBalanced(root->right, &rh) == false){
        return false;
    }

    *height = max(lh, rh) +1;
    if(abs(lh - rh) <= 1){
        return true;
    }
    else{
        return false;
    }

}

bool checkBalanced(Node* root){
    if(root == NULL){
        return true;                    // O(n^2) -- 
    }
                                                      
    if(checkBalanced(root->left) == false){
        return false;
    }

    if(checkBalanced(root->right) == false){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh - rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    // driver code
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
   //root->left->right = new Node(5);
    //root->right->left = new Node(6);
    //root->right->right = new Node(7);

    int height = 0;
    cout << checkBalanced(root) << endl;
    cout << isBalanced(root, &height) << endl;


    return 0;

}