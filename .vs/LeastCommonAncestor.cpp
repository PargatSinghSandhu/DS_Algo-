#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(root==NULL||root==p||root==q)
    {
        return root;
    }
    TreeNode * left = lowestCommonAncestor(root->left, p, q);
    TreeNode * right = lowestCommonAncestor(root->right,p,q);

    if(left==NULL)
    {
        return right;
    }
    if(right==NULL)
    {
        return left;
    }
    else
    {
        return root;
    }
}

int main() {
    vector<int> ans;
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->left->right->right = new TreeNode(4);
    root->left->right->left = new TreeNode(7);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    
    TreeNode * p = new TreeNode(5);
    TreeNode * q = new TreeNode(4);
    TreeNode* res = lowestCommonAncestor(root, p, q);
    cout<<res->val;
    return 0;
}
