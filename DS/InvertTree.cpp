#include <iostream>

using namespace std;

struct Node {
    Node *left, *right;
    int data;
    Node(int data) {
        left = NULL;
        right = NULL;
        this->data = data;
    }
};

Node *Invert (Node *Tree) {
    if(!Tree) return NULL;
    Node *left = Invert(Tree->right);
    Node *right = Invert(Tree->left);
    Tree->left = right;
    Tree->right = left;
    return Tree;
}

void PreOrder(Node *head) {
    if (!head) return;
    cout << head->data << "\n";
    PreOrder(head->left);
    PreOrder(head->right);
}

int main() {
    Node *root = new Node(1);
    Node *left = new Node(2);
    Node *right = new Node(3);
    Node *left_left = new Node(4);
    root->left = left;
    root->right = right;
    left->left = left_left;
    root = Invert(root);
    PreOrder(root);
    return 0;
}
