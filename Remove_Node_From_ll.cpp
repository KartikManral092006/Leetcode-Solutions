/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
    std::stack<int>s ;
    ListNode *p = head ;
    while(p!=nullptr){
        s.push(p->val);
        p=p->next;
    }
    ListNode* currNode;
    ListNode* tempNode;
    int i = 0;
    while(!s.empty()){
        int x = s.top();
        s.pop();
        if(i == 0 ){
            currNode = new ListNode(x);
            head = currNode ;
        }else{
            if(x >= currNode->val){
                tempNode=new ListNode(x);
                currNode->next = tempNode ;
                currNode = tempNode;
            }
        }
        i++;
    }
    ListNode *l,*m =head , *n=nullptr;

     while(m){
            l=n;
            n=m;
            m=m->next;
            n->next = l ;
    }
    return n ;
    }
};
