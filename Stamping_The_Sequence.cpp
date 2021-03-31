#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        int slen=stamp.size();
        int tlen=target.size();

        vector<int> ans;
        bool ch=true;
        while(ch){
            ch=false;
            for(int i=0;i<tlen-slen+1;i++){
                bool tmpCh=true;
                int j=0;
                for(j=0;j<slen;j++){
                    if(target[i+j]=='*'){
                        continue;
                    }
                    else if(target[i+j]!=stamp[j]){
                        tmpCh=false;
                        break;
                    }
                }

                if(tmpCh&&j==slen){
                    ch=true;
                    for(int j=0;j<slen;j++){
                        target[i+j]='*';
                    }
                    ans.push_back(i);
                }
            }
        }
        for(int i=0;i<tlen;i++){
            if(target[i]!='*'){
                return {};
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){


    return 0;
}