#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
    int m;
    int n;
    int arr[201][201];
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        m=dungeon.size();
        n=dungeon[0].size();
        
        for(int i=0;i<n;i++){
            arr[m][i]=INT32_MIN;
        }
        for(int i=0;i<m;i++){
            arr[i][n]=INT32_MIN;
        }
        arr[m-1][n]=0;
        arr[m][n-1]=0;

        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                arr[i][j]=min(0,max(arr[i+1][j],arr[i][j+1]))+dungeon[i][j];
            }
        }

        return arr[0][0]<0?arr[0][0]*(-1)+1:1;
    }
};

int main(){

    return 0;
}