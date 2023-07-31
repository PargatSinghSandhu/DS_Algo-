
 #include<vector>
 #include<iostream>
 #include<queue>
 using namespace std;
 
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
  vector< vector < int > > zigzagLevelOrder(TreeNode* root)
  {
    vector<vector< int > > result;
    if(root == NULL)
    {
        return result;
    }

    queue <TreeNode*> queue;
    queue.push(root);
    bool lefttoright = true;

    while(!queue.empty())
    {
        int size=queue.size();
        vector<int> row(size);

        for(int i=0;i<size;i++)
        {
            TreeNode* node = queue.front();
            queue.pop();

            int index = (lefttoright)? i:(size-1-i);

            row[index] = node->val;
            if(node->left)
                queue.push(node->left);
            if(node->right)
                queue.push(node->right);

        }
        lefttoright = !(lefttoright);
        result.push_back(row);
    }
    
    for (vector<int> rowq : result) 
    {
    for (int elem : rowq) 
    {
      cout << elem << " ";
    }
    cout << endl;
    }


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
    zigzagLevelOrder(root);
    
    return 0;
}