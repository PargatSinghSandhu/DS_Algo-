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

void inorder(TreeNode*root, vector<int> & ans)
        {
            if(root==NULL)
            {
                return;
            }
            
            inorder(root->left,ans);
            ans.push_back(root->val);          
            inorder(root->right,ans);
            

        }

   vector<int> inorderTraversal(TreeNode*root, vector<int> &ans) 
   {      

        inorder(root,ans);
        
         for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
        return ans;


    }

    

int main()
{
    vector <int> ans;
    TreeNode* root = new TreeNode(1);
    root->left = nullptr;
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);  
    inorderTraversal(root, ans);
    return 0;
}





        /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector <int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        
        

        inorder(root);
        return ans;


    }

    void inorder(TreeNode* root)
        {
            if(root==NULL)
            {
                return;
            }
            
            inorder(root->left);
            ans.push_back(root->val);
            inorder(root->right);
            

        }
};