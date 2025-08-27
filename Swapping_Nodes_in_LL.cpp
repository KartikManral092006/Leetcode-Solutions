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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode * p = head ,*q=head;
        int n = 1 ;
        while(p!=nullptr){
            n++;
            p=p->next;
        }
        p=head ;
        for(int i = 0 ; i < k-1 ;i++){
            p =p->next;
        }
        for(int i =0 ;i < n-k-1 ;i++){
            q=q->next;
        }
        swap(p->val , q->val);
        return head;
    }
};
