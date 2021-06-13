#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int curr=0;
        int ans=0;
        int i=0;
        while(i<stations.size()){
            if(curr+startFuel>=target){
                break;
            }

            int nextStation=-1;
            int nextFuel=-1;
            for(int j=i;j<stations.size();j++){
                if(curr+startFuel>=stations[j][0]){
                    if(nextFuel<=stations[j][1]){
                        nextFuel=stations[j][1];
                        nextStation=j;
                    }
                }
            }
            if(nextStation==-1){
                break;
            }
            startFuel=(curr+startFuel)-stations[nextStation][0]+stations[nextStation][1];
            curr=stations[nextStation][0];
            ans++;
            i=nextStation+1;
        }
        if(curr+startFuel<target){
            return -1;
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<vector<int>> v;
    v.push_back({13,21});
    v.push_back({26,115});
    v.push_back({100,47});
    v.push_back({225,99});
    v.push_back({299,141});
    v.push_back({444,198});
    v.push_back({608,190});
    v.push_back({636,157});
    v.push_back({647,255});
    v.push_back({841,123});

    s.minRefuelStops(1000,299,v);


    return 0;
}