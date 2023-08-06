#include <iostream>
#include <vector>
#include <climits>


using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode*build(vector<int> &A, int & i, int bound)

    {
    if(i==A.size()||A[i]>bound)
        {
            return NULL;
        }
    
    TreeNode *root = new TreeNode(A[i++]);
    root->left = build(A, i, root->val);
    root->right=build(A,i,bound);
    return root;
    }


TreeNode* bstfromPreorder(vector<int> & A)

{
    int i=0;
    return build(A, i, INT_MAX);

}

    




int main() {

    vector<int> A = {8, 5, 1, 7, 19, 12};   
    TreeNode* res = bstfromPreorder(A);
    //cout<<res;
    return 0;
}
