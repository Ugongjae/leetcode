#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
    bool room[1010]={false,};
public:
    bool canVisitAllRooms(vector<vector<int> >& rooms) {
        queue<int> q;
        int len=rooms.size();
        for(int i=0;i<rooms[0].size();i++){
            q.push(rooms[0][i]);
        }
        room[0]=true;
        while(!q.empty()){
            int nextroom=q.front();
            q.pop();
            if(!room[nextroom]){
                room[nextroom]=true;
                for(int i=0;i<rooms[nextroom].size();i++){
                    if(!room[rooms[nextroom][i]])
                        q.push(rooms[nextroom][i]);
                }
            }
        }

        bool ch=true;
        for(int i=0;i<len;i++){
            ch=ch&room[i];
        }

        return ch;
    }
};

int main(){


    return 0;
}