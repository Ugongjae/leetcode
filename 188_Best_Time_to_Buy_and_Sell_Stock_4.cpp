#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices,int k) {
        int s[101];
        int b[101];
        for(int i=0;i<=100;i++){
            b[i]=INT32_MIN;
            s[i]=0;
        }

        int len=prices.size();
        for(int i=0;i<len;i++){
            b[0]=max(b[0],-prices[i]);
            s[0]=max(s[0],b[0]+prices[i]);
            for(int j=1;j<k;j++){
                b[j]=max(b[j],s[j-1]-prices[i]);
                s[j]=max(s[j],b[j]+prices[i]);
            }
        }

        return s[k-1];
    }
};

int main(){
    vector<int> r={2,4,1};

    Solution s;
    cout<<s.maxProfit(r,2)<<endl;

    return 0;
}