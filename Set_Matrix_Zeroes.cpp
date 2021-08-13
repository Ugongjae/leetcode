#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int> >& matrix) {
        set<int> row;
        set<int> col;
        int i_size=matrix.size();
        int j_size=matrix[0].size();

        for(int i=0;i<i_size;i++){
            for(int j=0;j<j_size;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for(int i=0;i<i_size;i++){
            for(int j=0;j<j_size;j++){
                if(row.count(i)||col.count(j)){
                    matrix[i][j]=0;
                }
            }
        }

        return matrix;
    }
};

int main(){


    return 0;
}