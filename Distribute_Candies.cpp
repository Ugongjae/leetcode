#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
private:
    int arr[200003]={0,};
public:
    int distributeCandies(vector<int>& candyType) {
        int len=candyType.size();
        int sum=0;
        for(int i=0;i<len;i++){
            if(candyType[i]<0){
                int tmp=candyType[i]*(-1)+100000;
                if(arr[tmp]==0){
                    sum++;
                }
                arr[tmp]++;
            }else{
                if(arr[candyType[i]]==0){
                    sum++;
                }
                arr[candyType[i]]++;
            }
        }
        return min(len/2,sum);
    }
};

int main(){


    return 0;
}