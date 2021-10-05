#include <iostream>
#include <vector>
using namespace std;

class Solution {
    int m,n;
    int dx[4]={0,0,-1,1};
    int dy[4]={1,-1,0,0};
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        m=grid.size();
        n=grid[0].size();
        int sum=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    for(int k=0;k<4;k++){
                        if(!Ch(i+dx[k],j+dy[k])){
                            sum++;
                        }else{
                            if(grid[i+dx[k]][j+dy[k]]==0){
                                sum++;
                            }
                        }
                    }
                }
            }
        }

        return sum;
    }
    bool Ch(int x,int y){
        if(x<0||x>=m){
            return false;
        }
        if(y<0||y>=n){
            return false;
        }
        return true;
    }
};

int main(){

    return 0;
}