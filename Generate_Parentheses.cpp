#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
    vector<string> res;
    int len;
public:
    vector<string> generateParenthesis(int n) {
        len=n;
        DFS(1,1,0,"(");
    }
    void DFS(int idx,int o,int c,string s){
        if(idx==len*2){
            res.push_back(s);
            return;
        }
        if(o==c){
            if(o<len){
                DFS(idx+1,o+1,c,s+"(");
            }
        }else{
            if(o<len){
                DFS(idx+1,o+1,c,s+"(");
            }
            if(c<len){
                DFS(idx+1,o,c+1,s+")");
            }
        }
    }
};

int main(){
    Solution s;
    s.generateParenthesis(3);


    return 0;
}