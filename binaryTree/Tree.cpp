#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Node::Node(int value, Node* right, Node* left)
    :value(value),
    right(right),
    left(left) {}

void Tree::Insert(Node*& node, int value)
{

    if (!node)
    {
        node = new Node(value);
        return;
    }
    if (value > node->value)
        Insert(node->right, value);
    else if (value < node->value)
        Insert(node->left, value);
}

void Tree::Print(Node* node) const{
    if (!node) return;
    Print(node->left);
    cout << node->value << " ";
    Print(node->right);
}

bool Tree::Find(Node* node, int value) const
{
    if (!node) return false;
    if (node->value == value)
        return true;
    if (value > node->value)
        Find(node->right, value);
    else if (value < node->value)
        Find(node->left, value);
    else
        return false;
}

void Tree::Erase(Node* node, int value)
{
    if (!node)
        return;
    if (value > node->value)
        Erase(node->right, value);
    else if (value < node->value)
        Erase(node->left, value);
    else
    {

    }
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

bool Tree::Find(int value) const
{
    return Find(root, value);
}

void Tree::Erase(int value)
{
    Erase(root, value);
}
