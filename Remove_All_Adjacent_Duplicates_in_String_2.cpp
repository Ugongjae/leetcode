#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
    int find(string& s,int k){
        char prev='\0';
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==prev){
                count++;
                if(count==k){
                    return i-k+1;
                }
            }else{
                prev=s[i];
                count=1;
            }
        }
        return -1;
    }
public:
    string removeDuplicates(string s, int k) {
        int i;
        while((i=find(s,k))!=-1){
            s.erase(i,k);
        }

        return s;
    }
};

int main(){


    return 0;
}