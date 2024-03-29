#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
    vector<int> ans;
    void preOrder(Node* root){
        if(root==nullptr){
            return;
        }
        ans.push_back(root->val);

        for(int i=0;i<root->children.size();i++){
            preOrder(root->children[i]);
        }
    }
public:
    vector<int> preorder(Node* root) {
        preOrder(root);
        return ans;
    }
};

int main(){


    return 0;
}