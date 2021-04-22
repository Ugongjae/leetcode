#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    int arr[10001];
    int idx[10001]={0,};
public:
    int leastBricks(vector<vector<int>>& wall) {
        int row=wall.size();
        int ans=0;
        int len=0;

        int level=987987987;
        for(int i=0;i<row;i++){
            arr[i]=wall[i][0];
            level=min(level,arr[i]);
        }
        for(int i=0;i<wall[0].size();i++){
            len+=wall[0][i];
        }

        while(true){
            int tmp=0;
            if(level==len){
                break;
            }
            for(int i=0;i<row;i++){
                if(arr[i]==level){
                    tmp++;
                    if(idx[i]<wall[i].size()-1){
                        idx[i]++;
                        arr[i]+=wall[i][idx[i]];
                    }
                }
            }
            ans=max(ans,tmp);
            level=arr[0];
            for(int i=1;i<row;i++){
                level=min(level,arr[i]);
            }
        }

        return row-ans;
    }
};

int main(){
    vector<vector<int>> v;
    v.push_back({1});
    v.push_back({1});
    v.push_back({1});

    Solution s;
    cout<<s.leastBricks(v)<<endl;


    return 0;
}