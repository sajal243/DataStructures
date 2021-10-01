#include<bits/stdc++.h>
using namespace std;

/*
                        1          let targetNode -- 5     k = 3
                       / \                  case1 -- finding in nodes subtree    ans = {8,9}
                      5   2                 case2 -- finding in nodes ancestors   ans = {3,4}
                     /   / \                   i) -- find distance(d) from targetNode to anscestor node
                    6   3   4                  ii) -- for all ancestors search other subtree nodes at (K-d)
                    \
                     7
                    / \
                   8   9

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

// case 1
void printSubtreeNodes(Node* root, int k){
    if(k<0 || root == NULL){
        return ;
    }
    if(k == 0){
        cout << root->data << " ";
    }

    printSubtreeNodes(root->left, k-1);
    printSubtreeNodes(root->right, k-1);
}

// Main function 

int Nodes_At_K_distance(Node* root, Node* targetNode, int K){
    if(root == NULL){
        return -1;
    }

    if(root == targetNode){               // if root is a targetNode
        printSubtreeNodes(root, K);
        return 0;
    }
    
    int dl = Nodes_At_K_distance(root->left, targetNode,K);
    if(dl != -1){
        if(dl+1 == K){                        // if target Node found at left (case 1)
            cout << root->data << " ";
        }
        else{
            printSubtreeNodes(root->right, K-dl-2);     // case 2 -- finding in right ancestor subtree 
        }

        return dl + 1;
    }

    int dr = Nodes_At_K_distance(root->right, targetNode,K);
    if(dr != -1){
        if(dr+1 == K){                        // if target Node found at right (case 1)
            cout << root->data << " ";
        }
        else{
            printSubtreeNodes(root->right, K-dr-2);     // case 2 -- finding in left ancestor subtree 
        }

        return dr + 1;
    }

    return -1;   // if targetNode not found in left or right or root  

}

int main(){
    Node* root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(2);
    root->left->left = new Node(6);
    root->left->left->right = new Node(7);
    root->left->left->right->left = new Node(8);
    root->left->left->right->right = new Node(9);
    root->right->left = new Node(3);
    root->right->right = new Node(4);

    Nodes_At_K_distance(root, root->left, 3);
    return 0;
}