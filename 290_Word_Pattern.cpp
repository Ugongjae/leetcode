#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

class Solution {
    vector<string> split(string s, string divid) {
        vector<string> v;
        char* c = strtok((char*)s.c_str(), divid.c_str());
        while (c) {
            v.push_back(c);
            c = strtok(NULL, divid.c_str());
        }
        return v;
    }
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string,char> rev_mp;

        vector<string> sv=split(s," ");

        if(pattern.size()!=sv.size()){
            return false;
        }

        for(int i=0;i<sv.size();i++){
            if(mp[pattern[i]].size()==0){
                mp[pattern[i]]=sv[i];
            }else{
                if(mp[pattern[i]]!=sv[i]){
                    return false;
                }
            }

            if(!rev_mp[sv[i]]){
                rev_mp[sv[i]]=pattern[i];
            }else{
                if(rev_mp[sv[i]]!=pattern[i]){
                    return false;
                }
            }
        }

        return true;
    }
};


int main(){


    return 0;
}