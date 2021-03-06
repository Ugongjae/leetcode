#include <iostream>
#include <algorithm>
#include <vector>
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
private:
    vector<vector<double> > q;
public:
    void preOrder(TreeNode* root,int level){
        if(level>=q.size()){
            vector<double> tmp;
            tmp.push_back(1);
            tmp.push_back(root->val);
            q.push_back(tmp);
        }
        else{
            q[level][0]++;
            q[level][1]+=root->val;
        }
        if(root->left){
            preOrder(root->left,level+1);
        }
        if(root->right){
            preOrder(root->right,level+1);
        }
    }
    vector<double> averageOfLevels(TreeNode* root) {
        preOrder(root,0);

        vector<double> res;
        for(int i=0;i<q.size();i++){
            res.push_back(q[i][1]/q[i][0]);
        }
        return res;
    }
};

int main(){

    Solution s;

    TreeNode* a5=new TreeNode(7);
    TreeNode* a4=new TreeNode(15);
    TreeNode* a3=new TreeNode(20);
    TreeNode* a2=new TreeNode(9,a4,a5);
    TreeNode* a1=new TreeNode(3,a2,a3);

    vector<double> ans = s.averageOfLevels(a1);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "<<endl;
    }

    return 0;
}