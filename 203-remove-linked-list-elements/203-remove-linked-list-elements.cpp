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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp;
        while(head!=NULL and head->val == val){
            temp = head->next;
            delete head;
            head = temp;
        }
        if(head == NULL) return head;
        ListNode* cur = head->next, *prev = head;
        
        while(cur!=NULL){
            if(cur->val == val){
                prev->next = cur->next;
                delete cur;
                cur = prev->next;
                continue;
            }
            prev = cur;
            cur = cur->next;
        }
        
        return head;
    }
};