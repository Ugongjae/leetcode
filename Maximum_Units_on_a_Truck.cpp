#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Cmp(vector<int>& a,vector<int>& b){
    if(a[1]==b[1]){
        return a[0]>b[0];
    }
    return a[1]>b[1];
}

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),Cmp);
        int ans=0;
        int i=0;
        int j=0;
        while(i<truckSize&&j<boxTypes.size()){
            if(i+boxTypes[j][0]>truckSize){
                int tmp=truckSize-i;
                ans+=tmp*boxTypes[j][1];
                break;
            }
            ans+=boxTypes[j][0]*boxTypes[j][1];
            i+=boxTypes[j][0];
            j++;
        }

        return ans;
    }
};


int main(){
    Solution s;
    vector<vector<int>> v;
    v.push_back({1,3});
    v.push_back({2,2});
    v.push_back({3,1});
    s.maximumUnits(v,4);


    return 0;
}