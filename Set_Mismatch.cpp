#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int arr[10001]={0,};
        vector<int> res;

        for(int i=0;i<nums.size();i++){
            if(arr[nums[i]]==1){
                res.push_back(nums[i]);
            }else{
                arr[nums[i]]=1;
            }
        }

        for(int i=1;i<=nums.size();i++){
            if(arr[i]==0){
                res.push_back(i);
                break;
            }
        }

        return res;
    }
};

int main(){

    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);
    a.push_back(4);

    Solution s;
    s.findErrorNums(a);


    return 0;
}