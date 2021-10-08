#include <iostream>
#include <string>
using namespace std;

struct Node{
    Node* arr[26]={nullptr,};
    bool hasNext=false;
    bool isTrue=false;
};

class Trie {
    Node* head;
public:
    Trie() {
        head=new Node();
    }
    
    void insert(string word) {
        Node* cur=head;
        for(char c : word){
            if(cur->arr[c-'a']){
                cur=cur->arr[c-'a'];
            }else{
                cur->arr[c-'a']=new Node();
                cur->hasNext=true;
                cur=cur->arr[c-'a'];
            }
        }
        cur->isTrue=true;
    }
    
    bool search(string word) {
        Node* cur=head;
        for(char c : word){
            if(!cur->hasNext){
                return false;
            }
            if(!cur->arr[c-'a']){
                return false;
            }else{
                cur=cur->arr[c-'a'];
            }
        }
        return cur->isTrue;
    }
    
    bool startsWith(string prefix) {
        Node* cur=head;
        for(char c : prefix){
            if(!cur->hasNext){
                return false;
            }
            if(!cur->arr[c-'a']){
                return false;
            }else{
                cur=cur->arr[c-'a'];
            }
        }
        return cur->hasNext | cur->isTrue;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

int main(){


    return 0;
}