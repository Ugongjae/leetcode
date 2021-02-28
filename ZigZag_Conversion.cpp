#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    string arr[1001];
public:
    string convert(string s, int numRows) {

        int dir=1;
        int j=1;
        if(numRows==1){
            return s;
        }
        for(int i=0;i<s.size();i++){
            arr[j].push_back(s[i]);
            j+=dir;
            if(j==numRows){
                dir=-1;
            }
            if(j==1){
                dir=1;
            }
        }
        string res;
        for(int i=1;i<=numRows;i++){
            for(int j=0;j<arr[i].size();j++){
                res.push_back(arr[i][j]);
            }
        }

        return res;
    }
};

int main(){
    Solution s;
    cout<<s.convert("AB",1)<<endl;


    return 0;
}