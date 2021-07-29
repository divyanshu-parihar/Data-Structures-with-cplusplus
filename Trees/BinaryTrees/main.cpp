#include<iostream>
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


    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main(){

    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    return 0;

}