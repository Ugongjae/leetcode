#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int num=prices[0];
        int ret=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]>num){
                ret+=prices[i]-num;
            }
            num=prices[i];
        }

        return ret;
    }
};

int main(){


    return 0;
}