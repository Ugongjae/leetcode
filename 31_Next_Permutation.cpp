#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len=nums.size();
        int i=len-1;
        while(i>=1&&nums[i-1]>=nums[i]){
            i--;
        }
        if(i==0){
            int j=len-1;
            while(i<j){
                swap(nums[i++],nums[j--]);
            }
            return;
        }

        int j=len-1;
        while(nums[i-1]>=nums[j]){
            j--;
        }
        swap(nums[i-1],nums[j]);
        j=len-1;
        while(i<j){
            swap(nums[i++],nums[j--]);
        }
    }
};

int main(){


    return 0;
}