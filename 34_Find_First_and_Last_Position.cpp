#include <iostream>
#include <vector>
using namespace std;

class Solution {
    int binarySearch(vector<int>& nums,int left,int right,int target){

        while(left<right){
            int mid=(left+right)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        if(nums[left]!=target){
            return -1;
        }
        return left;


    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        if(nums.size()==0){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }

        int m=binarySearch(nums,0,nums.size()-1,target);

        
        if(m==-1){
            v.push_back(m);
            v.push_back(m);
            return v;
        }

        int i=m;
        int j=m;
        while(i>=0&&nums[i]==nums[m]){
            i--;
        }
        while(j<nums.size()&&nums[j]==nums[m]){
            j++;
        }
        v.push_back(i+1);
        v.push_back(j-1);

        return v;
    }
};

int main(){

    vector<int> a;
    a.push_back(5);
    a.push_back(7);
    a.push_back(7);
    a.push_back(8);
    a.push_back(8);
    Solution s;
    vector<int> r=s.searchRange(a,6);

    cout<<r[0]<<" "<<r[1]<<endl;

    return 0;
}