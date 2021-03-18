#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int len = nums.size();

        if(len==1){
            return 1;
        }

        bool plus=true;
        int ans=1;
        int tmp=nums[0];
        int j=1;
        while(j<len&&tmp==nums[j]){
            j++;
        }
        if(j==len){
            return 1;
        }
        if(nums[j]>tmp){
            plus=true;
            tmp=nums[j];
            ans++;
        }else{
            plus=false;
            tmp=nums[j];
            ans++;
        }
        for(int i=j+1;i<len;i++){
            if(nums[i]>tmp){
                if(!plus){
                    plus=true;
                    ans++;
                    tmp=nums[i];
                }else{
                    tmp=nums[i];
                }
            }else if(nums[i]<tmp){
                if(plus){
                    plus=false;
                    ans++;
                    tmp=nums[i];
                }else{
                    tmp=nums[i];
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s;

    vector<int> v;
    v.push_back(1);
    v.push_back(7);
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    v.push_back(5);

    cout<<s.wiggleMaxLength(v)<<endl;

    return 0;
}