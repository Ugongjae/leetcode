#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int removePalindromeSub(string s) {
        int len=s.size();
        if(len==0){
            return 0;
        }
        for(int i=0;i<len/2;i++){
            if(s[i]!=s[len-i-1]){
                return 2;
            }
        }
        return 1;
    }
};

int main(){

    Solution s;

    cout<<s.removePalindromeSub("ababa")<<endl;
    cout<<s.removePalindromeSub("abb")<<endl;
    cout<<s.removePalindromeSub("baabb")<<endl;
    cout<<s.removePalindromeSub("")<<endl;


    return 0;
}