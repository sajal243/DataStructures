#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


// approach 1 --- O(n) ----
/*
           node(min , max)
           /           \
node(min, root)       node(root, max)

*/

bool checkBST(Node* root, Node* min, Node* max){
    if(root == NULL){
        return true;           // base condn
    }

    if(min!=NULL && root->data <= min->data){
        return false;
    }

    if(max!=NULL && root->data >= max->data){
        return false;
    }

    bool leftvalid = checkBST(root->left, min, root);
    bool rightvalid = checkBST(root->right, root, max);

    return leftvalid and rightvalid;
}

int main(){
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    if(checkBST(root,NULL,NULL)){
        cout  << "Yes, It is" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}