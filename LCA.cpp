#include<bits/stdc++.h>
using namespace std;

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

bool getPath(Node* root, int temp, vector<int> &path ){
    if(root == NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data == temp){
        return true;
    }
    if(getPath(root->left, temp, path) || getPath(root->right, temp, path)){
        return true;
    }

    //backtracking
    path.pop_back();      // if temp is not the part of path 
    return false;
}

int LCA(Node* root, int t1, int t2){
    vector<int> v1, v2;                     // O(n) 

    if(!getPath(root, t1, v1) || !getPath(root, t2, v2)){
        return -1;
    }


    int pc;
    for(pc = 0; pc<v1.size() && v2.size(); pc++){
        if(v1[pc] != v2[pc]){
            break;
        }
    }

    
    return v1[pc-1];

}

// approach 2
Node* LCA2(Node* root, int t1, int t2){
                                                // O(n) --- but simpler than above
    if(root == NULL){
        return NULL;
    }
    if(root->data == t1 || root->data == t2){
        return root;
    }

    Node* leftLCA = LCA2(root->left, t1, t2);
    Node* rightLCA = LCA2(root->right, t1, t2);

    if(leftLCA && rightLCA){
        return root;
    }

    if(leftLCA != NULL){
        return leftLCA;
    }
    return rightLCA;
}

int main(){

    /*     1
          / \
         2   3
        /   / \
       4   5   6
          /
         7

    */

    Node* root = new Node(1);               
    root->left = new Node(2);                
    root->right = new Node(3);             
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);

    int t1 = 7;
    int t2 = 6;

    int lca = LCA(root, t1, t2);
    if(lca == -1){
        cout << "LCA doesn't exist" <<endl;
    }
    else{
        cout << "LCA is : " << lca <<endl;
    }

    Node* res = LCA2(root, t1, t2);
    cout <<"LCA is : " << res->data;


    return 0;
}