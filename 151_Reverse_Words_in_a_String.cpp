#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
    vector<string> split2(string s, string divid) {
        vector<string> v;
        int start = 0;
        int d = s.find(divid);
        while (d != -1){
            v.push_back(s.substr(start, d - start));
            start = d + 1;
            d = s.find(divid, start);
        } 
        v.push_back(s.substr(start, d - start));

        return v;
    }
public:
    string reverseWords(string s) {
        vector<string> res=split2(s," ");
        string ans="";
        int len=res.size();
        for(int i=len-1;i>=0;i--){
            if(res[i].size()>0){
                ans+=res[i];
                ans+=" ";
            }
        }

        ans.erase(ans.size()-1);
        return ans;
    }
};

int main(){
    Solution s;

    cout<<s.reverseWords("a good    example")<<endl;

    return 0;
}