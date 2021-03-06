#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<int> sA;
        stack<int> sB;

        while(headA!=NULL){
            sA.push(headA->val);
            headA=headA->next;
        }
        while(headB!=NULL){
            sB.push(headB->val);
            headB=headB->next;
        }

        stack<int> sres;
        while(sA.top()==sB.top()){
            sres.push(sA.top());
            sA.pop();
            sB.pop();
        }

        ListNode* headRes=new ListNode(sres.top());
        sres.pop();
        ListNode* curr=headRes;
        while(!sres.empty()){
            ListNode* newNode = new ListNode(sres.top());
            sres.pop();
            curr->next=newNode;
            curr=curr->next;
        }
        return headRes;
    }
};

int main(){


    return 0;
}