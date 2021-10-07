#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
    int m,n;
    bool visited[7][7]={false,};
    int dx[4]={0,0,-1,1};
    int dy[4]={-1,1,0,0};
    string st;
    vector<vector<char>> mp;
public:
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        st=word;
        mp=board;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=true;
                if(word[0]==board[i][j]){
                    bool ch=DFS(i,j,1);
                    if(ch){
                        return true;
                    }
                }
                visited[i][j]=false;
            }
        }
        return false;
    }
    bool DFS(int x,int y,int idx){
        if(idx==st.size()){
            return true;
        }

        bool ret=false;

        for(int i=0;i<4;i++){
            if(Ch(x+dx[i],y+dy[i])){
                if(visited[x+dx[i]][y+dy[i]]==false && st[idx]==mp[x+dx[i]][y+dy[i]]){
                    visited[x+dx[i]][y+dy[i]]=true;
                    ret=ret|DFS(x+dx[i],y+dy[i],idx+1);
                    visited[x+dx[i]][y+dy[i]]=false;
                }
            }
        }

        return ret;
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