#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
    int m,n;
    int res=0;
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    bool Ch(int x,int y){
        if(x<0||x>=m){
            return false;
        }
        if(y<0||y>=n){
            return false;
        }
        return true;
    }
    void BFS(vector<vector<int> >& matrix,int sx,int sy){
        queue<pair<pair<int,int>,int> > q;
        q.push(make_pair(make_pair(sx,sy),1));

        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int d=q.front().second;
            int num=matrix[x][y];
            q.pop();

            res=max(res,d);

            for(int i=0;i<4;i++){
                if(Ch(x+dx[i],y+dy[i])){
                    if(matrix[x+dx[i]][y+dy[i]]>num){
                        q.push(make_pair(make_pair(x+dx[i],y+dy[i]),d+1));
                    }
                }
            }
        }
    }
public:
    int longestIncreasingPath(vector<vector<int> >& matrix) {
        m=matrix.size();
        n=matrix[0].size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                BFS(matrix,i,j);
            }
        }

        return res;
    }
};

int main(){



    return 0;
}