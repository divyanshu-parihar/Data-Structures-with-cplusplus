#include <iostream>
using namespace std;
/*

Degree: How many nodes are connected to a node.

Binary Tree : its a tree , which has atmost 2 children.

A NON-LINEAR Structure;

Properties:
Tree is made up of nodes and edges!
n node -> n-1 edges.
Degree : NO. of direct children.(for a node).
Degree of a tree is the highest degree fo a node among all the nodes presen in
hte treee.

TYPES of binary Tree:

1. Full or Straight Binary Tree.
    - All nodes have either 0 or 2 children.
2. Perfect Binary Tree.
    - All nodes have 2 chidren. + All leaf nodes are on same level.
3. Complete Binary Tree.
    -All levels are completely filles except possibly the last level + last
level must have its leafs as left as possible.
4. Degeneratory Binary Tree:
    -every  parent node has exactly one child.
    -Sub-Types:
        -left Skewed : All the children are skewed toward right.
        -Right skewed : All the children are skewed toward left.

-------------------------------------------
Representaion of Binary Tree
1. Array Representation
2. Linked Representation
*/

// self -refrencial data structure
struct node {
    int data;
    struct node* left;
    struct node* right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(struct node* root) {
    if (root) {
        cout << root->data << ' ';
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node* root) {
    if (root) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << ' ';
    }
}
void inorder(struct node* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << ' ';
        inorder(root->right);
    }
}
// Searching in Binary Search Tree:

struct node* searching(struct node* root, int key) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == key) {
        cout << "found ";
        return root;
    } else if (root->data > key) {
        return searching(root->left, key);
    } else {
        return searching(root->right, key);
    }
}
struct node* searchIter(struct node* root, int key) {
    while (root != NULL) {
        if (root == NULL) {
            return NULL;
        }
        if (key == root->data) {
            return root;
        } else if (key < root->data) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return NULL;
}
struct node* inOrderPredecessor(struct node* root){
   root = root->left; 
   while(root->right != NULL){
       root = root->right;
   }
   return root;
}
void deleteNode(struct node* root ,int val){
    struct node* ipre;
    if(root == NULL){
        return ;
    }    
    if(root->left == NULL && root->right == NULL){
        free(root);
        return ;
   }


    if(val < root->data ){
        deleteNode(root->left, val);
    }else if(val > root->data){
        deleteNode(root->right, val);
    }
    else{
        ipre = inOrderPredecessor(root);
        root->data = ipre->data;
        deleteNode(root->left,ipre->data);
    }

}
void insert(struct node* root, int value)
{
    struct node* prev = NULL;

    while (root != NULL){
        prev = root;
        if(value== root->data){
            return ;
        }

        else if(value < root->data){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    struct node* newNode = new node(value);
    if(value < prev->data){
        prev->left = newNode;
    }else{
        prev->right = newNode;
    }
    
}
int main() {
    struct node* root = new node(3);
    root->left = new node(2);
    root->right = new node(4);
    // root->right->left = new node(0);
    // root->right->right = new node(5);

    //  cout << "\nPreorder traversal of binary tree is \n";
    // preorder(root);

    // cout << "\nInorder traversal of binary tree is \n";
    // inorder(root);

    // cout << "\nPostorder traversal of binary tree is \n";
    // postorder(root);
    struct node* n = searching(root, 4);
    insert(root,7);
    cout << n->data;
    return 0;
}