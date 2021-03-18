#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        for(int i=0;i<len;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};

int main(){


    return 0;
}