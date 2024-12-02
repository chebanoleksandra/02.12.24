#pragma once
//binary search tree
class Tree
{
    class Node
    {
    public:
        int value;
        Node* left;
        Node* right;
        Node() :value(0),
            left(nullptr),
            right(nullptr) {};
        Node(int value) :value(value),
            left(nullptr),
            right(nullptr) {};
        Node(int value, Node* right, Node* left);
    };
    Node* root;
    void Insert(Node* node, int value);
    void Print(Node* node) const;
public:
    Tree();
    void Insert(int value);
    void Print() const;
};