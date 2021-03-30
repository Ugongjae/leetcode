#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
    int arr[256]={0,};
    int cha[256]={0,};
public:
    string minWindow(string s, string t) {
        int sumcnt=t.size();
        for(int i=0;i<sumcnt;i++){
            arr[t[i]]++;
        }
        int ans=987987987;
        int cnt=0;
        int r=0;
        int l=0;
        int idx=-1;
        for(int l=0;l<s.size();l++){
            cha[s[l]]++;
            if(cha[s[l]]<=arr[s[l]]){
                cnt++;
            }
            if(cnt==sumcnt){
                while(cha[s[r]]>arr[s[r]]){
                    if(cha[s[r]]>arr[s[r]]){
                        cha[s[r]]--;
                    }
                    r++;
                }
                if(ans>l-r+1){
                    ans=l-r+1;
                    idx=r;
                }
            }
        }

        if(idx==-1){
            return "";
        }
        else{
            return s.substr(idx,ans);
        }
    }
};

int main(){

    return 0;
}