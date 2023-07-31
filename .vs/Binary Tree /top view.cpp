#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
 
  struct Node {
      int val;
      Node *left;
      Node *right;
      Node() : val(0), left(nullptr), right(nullptr) {}
      Node(int x) : val(x), left(nullptr), right(nullptr) {}
      Node(int x, Node *left, Node *right) : val(x), left(left), right(right) {}
 };



vector<int> topView(Node *root)
{
    vector<int> result;

    if(root == NULL)
    {
        return result;
    }

    queue<pair<Node*,int>> queue;
    map<int,int>mpp;
    queue.push({root, 0});


    while(!queue.empty())
    {
        


        auto it = queue.front();
        queue.pop();
        Node*node = it.first;
        int line = it.second;

        if(mpp.find(line)==mpp.end()) // this will find a line in the map
        {
            mpp[line]=node->val;
        } 
        if(node->left!=NULL)
        {
            queue.push({node->left, line-1});
        }
        if(node->right!=NULL)
        {
            queue.push({node->right, line+1});
        }
        
    }

    for(auto it:mpp)
        {
            result.push_back(it.second);
        }
    for(auto el:result)
    {
        cout<<el;
    }
    return result;
}

int main()
{
    vector<int> ans;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node (4);
    root->left->right = new Node (5);
    root->right->left = new Node (6);
    root->right->right = new Node (7);
    topView(root);
    
    return 0;
}