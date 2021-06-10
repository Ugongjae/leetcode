#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class MyCalendar {
    vector<pair<int,int>> v;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(int i=0;i<v.size();i++){
            if(v[i].first<end&&start<v[i].end){
                return false;
            }
            v.push_back({start,end});
            return true;
        }
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */


int main(){


    return 0;
}