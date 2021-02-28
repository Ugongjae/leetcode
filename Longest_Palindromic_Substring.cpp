#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int getPan(string s,int l,int r){
        while(l>=0&&r<s.size()&&s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        int tmp=-1;
        int start=0;
        if(s.size()==1){
            return s;
        }
        for(int i=0;i<s.size()-1;i++){
            int len1=getPan(s,i,i);
            int len2=getPan(s,i,i+1);
            int tmpmax=max(len1,len2);
            if(tmpmax>tmp){
                tmp=tmpmax;
                start=i-(tmpmax-1)/2;
            }
        }

        return s.substr(start,tmp);
    }
};

int main(){

    Solution s;

    s.longestPalindrome("b");

    return 0;
}