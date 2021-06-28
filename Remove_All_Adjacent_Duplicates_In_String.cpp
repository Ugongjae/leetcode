#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
    string str;
public:
    string removeDuplicates(string s) {
        str=s;
        bool ch=true;
        while(ch){
            ch=false;
            if(str.size()==0){
                break;
            }
            for(int i=0;i<str.size()-1;i++){
                if(str[i]==str[i+1]){
                    vector<int> res=DFS(i,i+1);
                    str.erase(res[0],res[1]-res[0]+1);
                    ch=true;
                    break;
                }
            }
        }
        return str;
    }
    vector<int> DFS(int left,int right){
        if(left>0&&right<str.size()-1){
            if(str[left-1]==str[right+1]){
                return DFS(left-1,right+1);
            }
        }
        vector<int> v;
        v.push_back(left);
        v.push_back(right);
        return v;
    }
};

int main(){

    string s="aaaaaaaa";
    Solution solu;
    cout<<solu.removeDuplicates(s)<<endl;


    return 0;
}