#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getPan(string s,int l,int r){
        while(l>=0&&r<s.size()&&s[l]==s[r]){
            l--;
            r++;
        }
        vector<int> res;
        res.push_back(l+1);
        res.push_back(r-1);
        res.push_back(r-l-1);
        return res;
    }
    string longestPalindrome(string s) {
        int tmp=-1;
        int ltmp=-1;
        int rtmp=-1;
        if(s.size()==1){
            return s;
        }
        for(int i=0;i<s.size()-1;i++){
            vector<int> len1=getPan(s,i,i);
            vector<int> len2=getPan(s,i,i+1);
            if(len2[2]>len1[2]){
                if(len2[2]>tmp){
                    ltmp=len2[0];
                    rtmp=len2[1];
                    tmp=len2[2];
                }
            }else{
                if(len1[2]>tmp){
                    ltmp=len1[0];
                    rtmp=len1[1];
                    tmp=len1[2];
                }
            }
        }
        vector<int> len3=getPan(s,s.size(),s.size());
        if(len3[2]>tmp){
            return s.substr(len3[0],len3[2]);
        }

        return s.substr(ltmp,rtmp-ltmp+1);
    }
};

int main(){

    Solution s;

    s.longestPalindrome("b");

    return 0;
}