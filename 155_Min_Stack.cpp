#include <iostream>
#include <map>
using namespace std;

class MinStack {
    int arr[30001];
    multimap<int,int> mp;
    int stackSize;
public:
    MinStack() {
        stackSize=0;
    }
    
    void push(int val) {
        arr[stackSize++]=val;
        mp.insert(make_pair(val,1));
    }
    
    void pop() {
        int num=arr[stackSize-1];
        stackSize--;

        multimap<int,int>::iterator it = mp.find(num);
        mp.erase(it);
    }
    
    int top() {
        return arr[stackSize-1];
    }
    
    int getMin() {
        return mp.begin()->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(){

    return 0;
}