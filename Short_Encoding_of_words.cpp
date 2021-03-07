#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool Comp(string a,string b){
        return a.size()>b.size();
    }

class Solution {
public:
    
    int minimumLengthEncoding(vector<string>& words) {
        string res="";
        sort(words.begin(),words.end(),Comp);
        for(int i=0;i<words.size();i++){
            int idx=res.find(words[i]);
            if(idx==string::npos){
                res+=words[i];
                res+='#';
            }else{
                bool Ch=false;
                while(idx!=string::npos){
                    if(res[idx+words[i].size()]=='#'){
                        Ch=true;
                        break;
                    }else{
                        idx=res.find(words[i],idx+1);
                    }
                }
                if(!Ch){
                    res+=words[i];
                    res+='#';
                }
            }
        }

        return res.size();
    }
};

int main(){

    vector<string> tmp;
    tmp.push_back("me");
    tmp.push_back("time");
    // tmp.push_back("bell");

    Solution s;
    cout<<s.minimumLengthEncoding(tmp)<<endl;

    return 0;
}