#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len=nums.size();
        int ans=nums[0];
        int maxnum=nums[0];
        int minnum=nums[0];
        int newmin;
        int newmax;
        for(int i=1;i<len;i++){
            newmin=min(nums[i],min(maxnum*nums[i],minnum*nums[i]));
            newmax=max(nums[i],max(minnum*nums[i],maxnum*nums[i]));
            ans=max(ans,newmax);
            maxnum=newmax;
            minnum=newmin;
        }
        return ans;
    }
};

int main(){


    return 0;
}