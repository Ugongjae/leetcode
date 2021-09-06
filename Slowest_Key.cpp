#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
    int arr[27];
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int cur=0;
        for(int i=0;i<keysPressed.size();i++){
            arr[keysPressed[i]-'a']=max(arr[keysPressed[i]-'a'],(releaseTimes[i]-cur));
            cur=releaseTimes[i];
        }
        int t=-1;
        int idx=0;
        for(int i=0;i<26;i++){
            if(t<=arr[i]){
                t=arr[i];
                idx=i;
            }
        }
        return 'a'+idx;
    }
};

int main(){


    return 0;
}