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
    void order(TreeNode* root,int level,int v,int d){
        if(level==d-1){
            TreeNode* leftNewNode = new TreeNode(v);
            TreeNode* rightNewNode = new TreeNode(v);

            leftNewNode->left=root->left;
            rightNewNode->right = root->right;
            root->left=leftNewNode;
            root->right = rightNewNode;
        }
        else if(level<d-1){
            if(root->left){
                order(root->left,level+1,v,d);
            }
            if(root->right){
                order(root->right,level+1,v,d);
            }
        }
    }
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d==1){
            TreeNode* newNode=new TreeNode(v);
            newNode->left=root;
            return newNode;
        }
        order(root,1,v,d);
        return root;
    }
};

int main(){


    return 0;
}