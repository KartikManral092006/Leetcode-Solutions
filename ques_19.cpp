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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *p = head ;
        ListNode *q = nullptr;
        int x = 0;
        while(p!=nullptr){
            x++;
            p=p->next;
        }
        if(head->next == nullptr || n == x){
            head = head->next;
            return head;
        }else{
            p=head;
            q=p->next;
            for(int i =0 ;i < x-n-1;i++){
                p=p->next;
                q=q->next;
            }
            p->next =q->next;
            q->next=nullptr;
        }
        return head;
    }
};
