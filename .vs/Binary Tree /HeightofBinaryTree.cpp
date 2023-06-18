#include<iostream>
#include<vector>


using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };



int heightBinary(TreeNode*root)
{
    if(root==NULL)
    {
        return 0;
    }

    int leftheight=heightBinary(root->left); 
    
    int rightheight = heightBinary(root->right);


    return 1+max(leftheight, rightheight);


}





int main()
{
    vector<int> ans;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode (4);
    root->right->right = new TreeNode(6);
    root->right->left->left = new TreeNode (5);
    int res = heightBinary(root);
    cout<<res;
    return 0;
}