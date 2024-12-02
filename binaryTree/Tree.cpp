#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Node::Node(int value, Node* right, Node* left)
    :value(value),
    right(right),
    left(left) {}

void Tree::Insert(Node* node, int value)
{
    if (node == nullptr)
    {
        Node* new_node = new Node(value);
        node = new_node;
        return;
    }
    if (node->value > value)
    {
        Insert(node->right, value);
    }
    else
    {
        Insert(node->left, value);
    }
}

Tree::Tree()
    :root(nullptr) {}


void Tree::Print(Node* node) const{
    if (node == nullptr)
    {
        return;
    }
    Print(node->left);
    cout << node->value << " ";
    Print(node->right);
}

void Tree::Insert(int value)
{
    Insert(root, value);
}

void Tree::Print() const {
    Print(root);
    cout << endl;
}
