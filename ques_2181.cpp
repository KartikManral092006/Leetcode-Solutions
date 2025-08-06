class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *q = head;
        ListNode *p = head->next ;
        ListNode *newhead = nullptr;
        ListNode *newtail = nullptr;

        // extra count but it will also run for this .

        // int countZeroes{1};
        // while(q->next != NULL){
        //     if(q->val == 0){
        //         countZeroes++;
        //     }
        //     q = q->next;
        // }
        // for(size_t i{} ;i < countZeroes-1 ;i++){
        while(p!= nullptr){
            int sum {0} ;
            while(p->val != 0 && p!= nullptr){
                sum+= p->val ;
                p= p->next;
            }
            ListNode *newNode = new ListNode(sum);
            if(newhead == nullptr){
                newhead = newNode ;
                newtail = newNode;
            }else{
                newtail->next = newNode ;
                newtail = newtail->next;
            }
            p=p->next;
        }
        return newhead ;
    }
};
