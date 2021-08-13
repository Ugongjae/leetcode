#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> tmp = strs;
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;

        for(int i=0;i<strs.size();i++){
            string t=tmp[i];
            sort(tmp[i].begin(),tmp[i].end());
            mp[tmp[i]].push_back(t);
        }
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};


int main(){

    return 0;
}