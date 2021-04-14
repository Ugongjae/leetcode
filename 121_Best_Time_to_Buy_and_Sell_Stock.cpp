#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minnum=987987987;
        int maxnum=-1;

        int ret=0;
        for(int i=0;i<prices.size();i++){
            if(minnum>prices[i]){
                minnum=prices[i];
                maxnum=-1;
            }else if(maxnum<prices[i]){
                maxnum=prices[i];
                ret=max(ret,maxnum-minnum);
            }
        }

        return ret;
    }
};

int main(){


    return 0;
}