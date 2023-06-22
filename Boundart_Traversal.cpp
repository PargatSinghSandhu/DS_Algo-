
int count = 0;
int r =1;

if(root==NULL)
{
    return NULL;
}

if(node->left!=NULL&&r==1)
{
  ans.push_back(node->val);
}
else if(node->right!=NULL)
{
  ans.push_back(node->val);
}
else if(node)


boundary_traversal(node->left);
ans.push_back(node->val);
if(node->right!=NULL)
{
    ans.push_back(node->val)
}


if(node->left!=NULL && node->right==NULL)
{
    
}

if(node->right!=NULL && node->left == NULL)
{
    ans.push_back(node->val);
}

if(node->left==NULL && node->right==NULL && count == 2)
{
    c++;
}

if(node->right!=NULL && node-)

 


voif leftboundary(Node*root, vector<int> &res)
{
    
    Node*cur=root->left;

    if(!isLeaf(cur))
    {
        res.push_back(cur->val);
    }
    if(cur->left)
    {
        cur = cur->left;
    }
    else
        cur=cur->right;

}