#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Solution {
    bool arr[1050000]={false,};
public:
    bool hasAllCodes(string s, int k) {
        int len = s.size();

        if(len<k){
            return false;
        }

        int sum=0;
        int tmp=1;
        for(int i=1;i<=k;i++){
            sum+=tmp*(s[len-i]-'0');
            sum*=2;
        }
        arr[sum]=true;
        tmp=pow(2,k-1);
        for(int i=len-k-1;i>=0;i--){
            sum/=2;
            sum+=tmp*(s[i]-'0');
            arr[sum]=true;
        }

        tmp=pow(2,k);
        for(int i=0;i<tmp;i++){
            if(!arr[i]){
                return false;
            }
        }
        return true;
    }
};

int main(){

    Solution s;

    cout<<s.hasAllCodes("00000000001011100",3)<<endl;


    return 0;
}