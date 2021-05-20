#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        q.push(make_pair(root,1));
        vector<vector<int>> ans;

        if(!root){
            return ans;
        }

        while(!q.empty()){
            TreeNode* curr=q.front().first;
            int d=q.front().second;
            q.pop();
            if(d>ans.size()){
                vector<int> a;
                a.push_back(curr->val);
                ans.push_back(a);
            }else{
                ans[d-1].push_back(curr->val);
            }

            if(curr->left){
                q.push(make_pair(curr->left,d+1));
            }
            if(curr->right){
                q.push(make_pair(curr->right,d+1));
            }

        }
        return ans;
    }
};

int main(){

    Solution s;
    TreeNode* root;
    root->val=3;
    TreeNode* a1=new TreeNode(9);
    TreeNode* a2=new TreeNode(20);
    TreeNode* b1=new TreeNode(15);
    TreeNode* b2=new TreeNode(7);
    a2->left=b1;
    a2->right=b2;
    root->left=a1;
    root->right=a2;
    s.levelOrder(root);

    return 0;
}