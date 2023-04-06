#incldue<isotream>

struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};


BstNode * GetNewNode(int data)
{
    BstNde* newNode  = new BstNode();
    newNode->data = data;
    newNode->left=data;
    newNode->right=NULL;
    return newNode;
}

BstNode*Insert( BstNode*root, int data)
{
   if(root == NULL)
   {
       root = GetNewNode(data);
       return root;
   }
    else if(data<=root->data)
    {
        root->left = Insert(root->left,data);
    }
   
    else {
        root->right =Insert(root->right,data);
    }
    return root;
}

bool Search( BstNode* root, int data )
{
    if(root==NULL)
        return false;
    else if (root->data == data )
        return true;
    else if(data<=root->data)
        return Search(root->left, data);
    else return Search (root->right,data);
}

int main()
{
    BstNode*root=NULL;
    root = Insert(root, 15);
    root = Insert(root, 25);
    root = Insert(root, 30);
}
