#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int len=nums.size();
        if(len<=1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans=-1;
        for(int i=0;i<len-1;i++){
            ans=max(ans,nums[i+1]-nums[i]);
        }
        return ans;
    }
};


int main(){


    return 0;
}