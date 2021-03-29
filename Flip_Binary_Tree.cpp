#include <iostream>
#include <vector>
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
    int idx=0;

    bool preOrder(TreeNode* root,vector<int>& v,vector<int>& ans){
        if(root==NULL){
            return true;
        }
        if(root->val!=v[idx++]){
            return false;
        }
        if(root->left!=NULL&&root->left->val!=v[idx]){
            ans.push_back(root->val);
            swap(root->left,root->right);
        }
        return preOrder(root->left,v,ans)&&preOrder(root->right,v,ans);
    }
public:
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        vector<int> ans;
        if(preOrder(root,voyage,ans)){
            return ans;
        }
        return {-1};
    }
};

int main(){


    return 0;
}