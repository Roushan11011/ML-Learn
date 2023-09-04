#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *left;
Node *right;
Node (int x){
    left=right=NULL;
    data=x;
}
};

Node* initialize(){
         Node* root = new Node(1);
 
    /* following is the tree after above statement
    1
    / \
    NULL NULL
    */
    root->left = new Node(2);
    root->right = new Node(3);
 
    /* 2 and 3 become left and right children of 1
       1
      / \
     2   3
    / \ / \
    NULL NULL NULL NULL
    */
    root->left->left = new Node(4);
    /* 4 becomes left child of 2
         1
       /   \
      2     3
     / \    / \
    4 NULL NULL NULL
    /   \
    NULL NULL
    */
   return root;
}
void PreOrder(Node *head){
    if(!head) return;
    cout<<head->data<<"\n";
    PreOrder(head->left);
    PreOrder(head->right);
}
void InOrder(Node *head){
    if(!head) return;
    PreOrder(head->left);
    cout<<head->data<<"\n";
    PreOrder(head->right);
}
void PostOrder(Node *head){
    if(!head) return;
    PreOrder(head->left);
    cout<<head->data<<"\n";
    PreOrder(head->right);
}
int main(){

    Node *root=initialize();
    //Traversal ~ PreOrder
    cout<<"PreOrder:\n";
    PreOrder(root);
    cout<<endl;
    //Traversal ~ InOrder
    cout<<"InOrder:\n";
    InOrder(root);
    cout<<endl;
    //Traversal ~ PostOrder
    cout<<"PostOrder:\n";
    PostOrder(root);
    return 0;
}

