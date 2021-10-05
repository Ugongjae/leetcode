#include <iostream>
#include <vector>
using namespace std;

class Solution {
    int arr[46]={0,1,2,};
public:
    int climbStairs(int n) {
        for(int i=3;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }
        return arr[n];
    }
};

int main(){


    return 0;
}