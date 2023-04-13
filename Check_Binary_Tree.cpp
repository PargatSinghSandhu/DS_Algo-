#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
};


bool IsBinarySearchTree(Node*root)
{
    if(root==NULL)
        return true;
    if((IsSubtreelesser(root->left, root->data))&&IsSubtreegreater(root->right, root->data))&&IsBinarySearchTree(root->left)&&IsBinarySearchTree(root->right))
        return true;
}


bool IsSubtreelesser(Node*root, int value)
{
    if(root==NULL)
    {
        return true;
    }
    if((root->data<=value) && IsSubtreelesser(root->left, value) && IsSubtreelesser(root->right, value))
    {
        return true;
    }
    else:
        return false;
}

IsSubtreegreater(Node*root, int data)
{
    if(root==NULL)
    {
        return NULL;
    }
    if((root->data<=value)&&IsSubtreegreater(root->right, value)&& IsSubtreegreater(root->left, value))
    {
        return true;
    }
    else:
        return false;
}

int main()
{
    
}
