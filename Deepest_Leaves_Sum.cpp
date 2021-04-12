#include <iostream>
#include <vector>
#include <algorithm>
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
    int depth=0;
    int res=0;
    void getDepth(TreeNode* root,int d){
        depth=max(depth,d);
        if(root->left){
            getDepth(root->left,d+1);
        }
        if(root->right){
            getDepth(root->right,d+1);
        }
    }
    void getSum(TreeNode* root,int d){
        if(d==depth){
            res+=root->val;
        }
        if(root->left){
            getSum(root->left,d+1);
        }
        if(root->right){
            getSum(root->right,d+1);
        }
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        getDepth(root,0);
        getSum(root,0);
        return res;
    }

};

int main(){


    return 0;
}