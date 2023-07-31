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

bool isValidBST(TreeNode* root, long minVal, long maxVal) {
    if (root == nullptr) {
        return true;
    }
    if (root->val >= maxVal || root->val <= minVal) {
        return false;
    }
    return isValidBST(root->left, minVal, root->val) && isValidBST(root->right, root->val, maxVal);
}

bool isValidBST1(TreeNode* root) {
    return isValidBST(root, LONG_MIN, LONG_MAX);
}

int main() {
    vector<int> ans;
    TreeNode* root = new TreeNode(13);
    root->left = new TreeNode(10);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(14);
    root->right->right = new TreeNode(17);
    root->right->right->left = new TreeNode(16);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(12);
    root->left->left->right = new TreeNode(9);
    root->left->left->right->left = new TreeNode(8);
    bool isBST = isValidBST1(root);
    cout<<isBST;
    return 0;
}
