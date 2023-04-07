#include<iostream>

using namespace std;

struct BstNode
{
    int data;
    BstNode* right;
    BstNode* left;
};


BstNode GetnewNode(int data1)
{
    BstNode* newNode = new BstNode();
    newNode->data = data1;
    newNode->left=newNode->right=NULL;
    return newNode;
}

BstNode* Insert ( BstNode* root, int data)
{
    if(root==NULL)
    {
        root=GetnewNode(data);
        
    }
    else if(data<=root->data)
    {
        root->left=Insert(root->left, data);
        
    }
    else
    {
        root->right = Insert(root->right, data);
    }
        return root;
}

bool search (BstNode*root, int data)
    {
        if(root==NULL)
        {
            return false;
        }
        else if(root->data == data)
        {
            return true;
        }
        else if(data<=root->data)
        {
            return Search(root->left, data)
        }
        else
            return Search(root->right, data);
    }
    
int main()
{
    BstNode*root=NULL;
}


