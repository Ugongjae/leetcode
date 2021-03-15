#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int> > ans;

        int sum=0;
        int len=nums.size();

        if(len<3){
            return {};
        }

        for(int i=0;i<len-2;i++){
            int j=i+1;
            int k=len-1;
            
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j++],nums[k--]});
                }
                else if(sum>0){
                    k--;
                }else{
                    j++;
                }
            }
        }

        vector<vector<int> > res;
        copy(ans.begin(),ans.end(),back_inserter(res));

        return res;
    }
};

int main(){

    Solution s;



    return 0;
}