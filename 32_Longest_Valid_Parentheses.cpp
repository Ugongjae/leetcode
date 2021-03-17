#include <iostream>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        
        int ans=0;
        stack<int> ss;

        for(int i=0;i<s.size();i++){
            if(s[i]==')'&&(!ss.empty())&&s[ss.top()]=='('){
                ss.pop();
                ans=max(ans,i-(ss.empty()?-1:ss.top()));
            }else{
                ss.push(i);
            }
        }
    }
};

int main(){


    return 0;
}