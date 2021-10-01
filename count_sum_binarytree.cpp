
// count and sum of nodes in a tree
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

int countNodes(Node* root){
    int count = 0;

    if(root == NULL ){
        return 0;
    }

    count += countNodes(root->left);
    count += countNodes(root->right);

    return count + 1; // +1 is for root
}

int sumOfNodes(Node* root){

    if(root == NULL ){
        return 0;
    }


    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data ;

    // method 2 -- return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data

}


int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << countNodes(root) <<endl; 
    cout << sumOfNodes(root) << endl;
    return 0;
}