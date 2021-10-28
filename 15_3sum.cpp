#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;

        if(nums.size()<3){
            return res;
        }

        for(int i=0;i<nums.size()-2;i++){
            int l=i+1;
            int r=nums.size()-1;

            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];

                if(sum==0){
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }else if(sum<0){
                    l++;
                }else{
                    r--;
                }
            }
        }

        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};

int main(){

    return 0;
}