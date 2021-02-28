#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        if(x==0)
            return x;
        long res=0;
        int isMinus=1;
        if(x<0){
            if(x==INT32_MIN){
                return 0;
            }
            x*=-1;
            isMinus=-1;
        }

        while(x>0){
            res*=(long)10;
            int tmp=x%10;
            res+=(long)tmp;
            x/=10;
        }
        if(res>INT32_MAX){
            return 0;
        }

        return res*(long)isMinus;
    }
};

int main(){

    Solution s;
    cout<<s.reverse(1534236469)<<endl;
    cout<<s.reverse(120)<<endl;
    cout<<s.reverse(1)<<endl;
    cout<<s.reverse(0)<<endl;
    cout<<s.reverse(-123)<<endl;

    return 0;
}