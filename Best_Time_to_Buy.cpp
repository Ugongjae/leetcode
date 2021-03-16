#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int selling=-prices[0];
        int buying=0;
        for(int i=1;i<prices.size();i++){
            buying=max(buying,selling+prices[i]-fee);
            selling=max(selling,buying-prices[i]);
        }


        return buying;
    }
};

int main(){


    return 0;
}