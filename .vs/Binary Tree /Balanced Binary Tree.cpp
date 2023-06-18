#include<iostream>
#include<algorithm>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 




int defheight(TreeNode*root)
{
    if(root==NULL)
    {
        return 0;
    }

    int leftheight = defheight(root->left);
    if(leftheight==-1)
    {
        return -1;
    }
    int rightheight = defheight(root->right);
    {
        return -1; 
    }
    if(abs(leftheight-rightheight >1))
    {
        return -1; 
    }
    return 1+max(leftheight,rightheight);
}


int main ()
{
    TreeNode*root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(2);
    root->left->left->left = new TreeNode(2);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);   

    int res =  defheight(root);
    if(res==-1)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
    return 0;
}