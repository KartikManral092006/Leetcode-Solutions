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
    int pairSum(ListNode* head) {
        // ListNode *size_cnt = head;
        // int n =0 ;
        // while(size_cnt->next != NULL){
        //     size_cnt = size_cnt->next ;
        //     n++;
        // }
        // ListNode *p = head ;
        // ListNode *q = head ;
        // int i = 0;
        // int maximum = INT_MIN;
        // while(i < (n+1/2)){
        //     for(int j = i ; j < n;j++){
        //          q = q->next ;
        //     }
        //     int sum = p->val+q->val;
        //     maximum = max(maximum,sum);
        //     p= p->next;
        //     q = head ;
        //     i++;
        // }
        // return maximum;
    stack<int> st ;
        ListNode * p = head ;
        ListNode * q = head ;

        while(q && q->next){
            st.push(p->val);
            p = p->next;
            q = q->next->next;
        }

        int max_Sum = 0;
        while(p){
            int x = st.top();
            st.pop();
            max_Sum = std::max(max_Sum , x +p->val);
            p= p->next ;
        }

    return max_Sum;

    }

};
