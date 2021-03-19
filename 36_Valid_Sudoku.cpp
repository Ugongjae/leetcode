#include <iostream>
#include <vector>
using namespace std;

class Solution {
bool checkRow(vector<vector<char> >& board){
        bool ret=true;
        for(int i=0;i<9;i++){
            bool arr[10]={false,};
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                else if(arr[board[i][j]-'0']){
                    ret=false;
                }
                arr[board[i][j]-'0']=true;
            }
        }

        return ret;
    }
    bool checkColumn(vector<vector<char> >& board){
        bool ret=true;
        for(int i=0;i<9;i++){
            bool arr[10]={false,};
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                else if(arr[board[j][i]-'0']){
                    ret=false;
                }
                arr[board[j][i]-'0']=true;
            }
        }

        return ret;
    }
    bool checkSquare(vector<vector<char> >& board){
        bool ret=true;
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                bool arr[10]={false,};
                for(int k=0;k<3;k++){
                    for(int p=0;p<3;p++){
                        if(board[i*3+k][j*3+p]=='.'){
                            continue;
                        }
                        else if(arr[board[i*3+k][j*3+p]-'0']){
                            ret=false;
                        }
                        arr[board[i*3+k][j*3+p]-'0']=true;
                    }
                }
            }
        }

        return ret;
    }
public:
    bool isValidSudoku(vector<vector<char> >& board) {
        return checkColumn(board)&checkRow(board)&checkSquare(board);
    }
};

int main(){


    return 0;
}