




while(root!=NULL)
{
    if(p->val>=root->val)
    {
        root=root->right
    }
    else
    {
    successor = root;
    root=root->left;
    }
    return root; 
}