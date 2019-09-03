#pragma once

class Node
{
private:
    int number;
    Node* right;
    Node* left;
public:
    Node(int, Node, Node);
    ~Node();
};

Node::Node(int number, Node right, Node left)
{
    this->number = number;
    this->right = &right;
    this->left = &left;
}

Node::~Node()
{
}
