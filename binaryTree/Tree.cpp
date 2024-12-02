#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Node::Node(int value, Node* right, Node* left)
    :value(value),
    right(right),
    left(left) {}

void Tree::Insert(Node* node, int value)
{
    
    if (!node)
    {
        return;
    }
    if (value > node->value)
    {
        Insert(node->right, value);
    }
    else if (value < node->value)
    {
        Insert(node->left, value);
    }
}

void Tree::Print(Node* node) const{
    if (!node) return;
    Print(node->left);
    cout << node->value << " ";
    Print(node->right);
}

void Tree::Insert(int value)
{
    if (root == nullptr)
    {
        root = new Node(value);
    }
    else
    {
        Insert(root, value);
    }
}

void Tree::Print() const {
    Print(root);
    cout << endl;
}
