#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int len=nums.size();
        long long ans=INT32_MIN;
        long long tmp=0;
        long long sum=0;
        for(int i=0;i<len;i++){
            tmp+=i*nums[i];
            sum+=nums[i];
        }
        ans=tmp;
        for(int i=0;i<len;i++){
            tmp-=sum;
            tmp+=(long long)nums[i]*len;
            ans=max(ans,tmp);
        }

        return ans;
    }
};

int main(){


    return 0;
}