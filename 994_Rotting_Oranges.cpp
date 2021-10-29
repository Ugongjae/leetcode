#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
    int n,m;
public:
    int orangesRotting(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int res=1;

        vector<vector<int>> mp(n,vector<int>(m,0));

        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    mp[i][j]=1;
                }
            }
        }



        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            res=max(res,mp[x][y]);

            for(int i=0;i<4;i++){
                int rx=x+dx[i];
                int ry=y+dy[i];
                if(Ch(rx,ry)){
                    if(grid[rx][ry]==1&&mp[rx][ry]==0){
                        mp[rx][ry]=mp[x][y]+1;
                        q.push({rx,ry});
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]>=1&&mp[i][j]==0){
                    return -1;
                }
            }
        }

        return res-1;
    }
    bool Ch(int x,int y){
        if(x<0||x>=n)
            return false;
        if(y<0||y>=m)
            return false;
        return true;
    }
};

int main(){


    return 0;
}