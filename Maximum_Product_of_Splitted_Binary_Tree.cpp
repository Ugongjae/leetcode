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
public:
    long long ans=0;
    const int MOD=1e9+7;
    int calcSum(TreeNode* node) {
        if (!node) return 0;
        
        node->val+=calcSum(node->right)+calcSum(node->left);
        return node->val;
    }

    void findMax(TreeNode* node, int& totalSum) {
        if (!node) return;
        long long prod=(long long)(node->val)*(totalSum-node->val);
        
        if (prod<ans) return;
        else ans=prod;
        findMax(node->left, totalSum);
        findMax(node->right, totalSum);
    }
    
    int maxProduct(TreeNode* root) {
        int totalSum=calcSum(root);
        findMax(root, totalSum);
        return ans%MOD;
    }
};

int main(){


    return 0;
}