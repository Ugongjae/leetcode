#include <iostream>
using namespace std;

class Solution {
    int arr[33];
public:
    int fib(int n) {
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;i++){
            arr[i]=arr[i-1]+arr[i-2];
        }

        return arr[n];
    }
};

int main(){


    return 0;
}