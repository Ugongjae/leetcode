#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();
        int arr[10001]={0,};
        for(int i=0;i<len;i++){
            arr[nums[i]]=1;
        }
        for(int i=1;i<=len;i++){
            if(arr[i]==0)
                return i;
        }
        return 0;
    }
};

int main(){
    Solution s;

    return 0;
}