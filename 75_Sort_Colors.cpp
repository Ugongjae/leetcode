#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size()<=1){
            return;
        }
        int i=0;
        int j=1;
        for(int j=1;j<nums.size();j++){
            i=j-1;
            int num=nums[j];

            while(i>=0&&nums[i]>num){
                nums[j--]=nums[i--];
            }
            nums[j]=num;
        }
    }
};

int main(){

    return 0;
}