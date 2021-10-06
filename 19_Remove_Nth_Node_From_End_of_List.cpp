#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur=head;
        int len=0;
        while(cur){
            len++;
            cur=cur->next;
        }

        int target=len-n;

        if(target==0){
            head=head->next;
            return head;
        }

        cur=head;
        while(--target){
            cur=cur->next;
        }

        cur->next=cur->next->next;

        return head;
    }
};

int main(){


    return 0;
}