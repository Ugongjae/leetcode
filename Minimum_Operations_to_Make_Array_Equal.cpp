#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minOperations(int n) {
        if(n%2==0){
            return n*n/4;
        }else{
            int sum=n/2;
            return sum*(sum+1);
        }
    }
};

int main(){


    return 0;
}