#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
    int arr[100001] = { 0, };
    bool visited[100001] = { false, };
    vector<int> n;
public:
    int dfs(int idx) {
        if (visited[idx]) {
            return arr[idx];
        }

        int res = 1;

        visited[idx] = true;
        return arr[idx] = res + dfs(n[idx]);
    }
    int arrayNesting(vector<int>& nums) {
        n = nums;
        for (int i = 0; i < nums.size(); i++) {
            if(visited[i])
                continue;
            dfs(i);
        }

        int res = 0;

        for (int i = 0; i < nums.size(); i++) {
            res = max(res, arr[i]);
        }
        return res;
    }
};

int main(){


    return 0;
}