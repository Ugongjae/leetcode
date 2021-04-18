#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int len=nums.size();
        int sum=0;
        int ans=0;
        int r=0;
        unordered_map<int,int> m;
        while(r<len){
            sum+=nums[r++];

            if(sum==k){
                ans++;
            }
            if(m.count(sum-k)>0){
                ans+=m[sum-k];
            }
            m[sum]++;
        }

        return ans;
    }
};

int main(){


    return 0;
}