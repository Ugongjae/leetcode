#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int len=s.size();
        if(len%2==0){
            int l=(len/2)-1;
            int r=(len/2);
            while(l>=0&&r<=len&&s[l]==s[r]){
                l--;
                r++;
            }
            return l==-1;
        }else{
            int l=(len/2);
            int r=(len/2);
            while(l>=0&&r<=len&&s[l]==s[r]){
                l--;
                r++;
            }
            return l==-1;
        }
    }
};

int main(){


    return 0;
}