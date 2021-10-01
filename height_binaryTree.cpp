#include<bits/stdc++.h>
using namespace std;

// diameter of Tree --> No. of nodes between any two leaf Nodes

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

int height(Node* root){

    if(root == NULL){
        return 0;
    }

    int lheight = height(root->left);
    int rheight = height(root->right);

    return max(lheight, rheight) + 1;
}

int calcDiameter(Node* root, int* height){

    int lh = 0, rh = 0;
    if(root == NULL){
        *height = 0;
        return 0;
    }

    int lDiameter = calcDiameter(root->left, &lh);
    int rDiameter = calcDiameter(root->right, &rh);
    int currDiameter = lh + rh + 1;

    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
    
}

int diameter(Node* root){         // brute force   
    if(root == NULL){
        return 0;
    }

    int lheight = height(root->left);
    int rheight = height(root->right);

    int currDiameter = lheight + rheight + 1;

    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
}

int main(){
    struct Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << height(root) << endl;
    cout << diameter(root) << endl;
    
    return 0;

}