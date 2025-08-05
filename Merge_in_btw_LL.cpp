
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *p = list1 ;
        ListNode *q = list1 ;
        ListNode *s = list2 ;
        for(int i{} ;i < a-1 ;i++){
            p = p->next ;
        }
        for(int i{}; i<b ;i++){
            q = q->next ;
        }
        while(s->next != NULL){
            s = s->next;
        }
        s->next=q->next;
        p->next = list2 ;
        q->next = NULL;

    return list1 ;
    }
};
