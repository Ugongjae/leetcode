#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    ListNode* h;
    ListNode* hh;
public:
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return head;
        }
        DFS(head);
        return h;
    }
    void DFS(ListNode* cur){
        if(cur->next==nullptr){
            h=hh=cur;
            return;
        }
        DFS(cur->next);
        hh->next=cur;
        hh=cur;
    }
};

int main(){
    ListNode* a1=new ListNode(1);
    ListNode* a2=new ListNode(2);
    ListNode* a3=new ListNode(3);
    ListNode* a4=new ListNode(4);
    ListNode* a5=new ListNode(5);

    a1->next=a2;
    a2->next=a3;
    a3->next=a4;
    a4->next=a5;

    Solution s;
    s.reverseList(a1);
    return 0;
}