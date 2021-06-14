#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int len=stations.size();
        int ans=0;
        for(int i=0;i<=len;i++){
            int des = i==len?target:stations[i][0];
            while(startFuel<des){
                if(pq.empty()){
                    return -1;
                }
                startFuel += pq.top();
                ans++;
                pq.pop();
            }
            if(i<len){
                pq.push(stations[i][1]);
            }
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