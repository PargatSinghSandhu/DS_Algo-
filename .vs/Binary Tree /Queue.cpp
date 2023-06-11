
#include <queue>
#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int main()
{

    TreeNode* root= new TreeNode(1);
    root->left= new TreeNode(2);
    root->right= new TreeNode(3);

    
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty())
    {
        TreeNode*node=q.front();
        cout<<node->val;
        q.pop();

        if(node->left!=NULL)
        {
            q.push(node->left);
        }
        if(node->right!=NULL)
        {
            q.push(node->right);
        }
    }
    
}