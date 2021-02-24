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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int len = lists.size();
        ListNode* head = new ListNode();
        ListNode* curr=head;

        bool ch=true;
        while(1){
            ch=false;
            int min=987987987;
            int tmp=0;
            for(int i=0;i<len;i++){
                if(lists[i]!=nullptr){
                    ch=true;
                    if(lists[i]->val<min){
                        tmp=i;
                        min=lists[i]->val;
                    }
                }
            }
            if(!ch){
                break;
            }
            curr->next=lists[tmp];
            curr=curr->next;
            lists[tmp]=lists[tmp]->next;
        }

        head=head->next;
        return head;
    }
};

int main(){
    vector<ListNode*> v;

    ListNode* a1=new ListNode(1);
    ListNode* a2=new ListNode(4);
    ListNode* a3=new ListNode(5);

    ListNode* b1=new ListNode(1);
    ListNode* b2=new ListNode(3);
    ListNode* b3=new ListNode(4);
    
    ListNode* c1=new ListNode(2);
    ListNode* c2=new ListNode(6);

    a1->next=a2;
    a2->next=a3;
    b1->next=b2;
    b2->next=b3;
    c1->next=c2;

    v.push_back(a1);
    v.push_back(b1);
    v.push_back(c1);

    Solution s;
    ListNode* res = s.mergeKLists(v);

    while(res){
        cout<<res->val<<endl;
        res=res->next;
    }

    return 0;
}